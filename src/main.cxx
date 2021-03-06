#include <GenieLexer.h>
#include <GenieParser.h>
#include <antlr4-runtime.h>

#include <argparse/argparse.hpp>
#include <filesystem>
#include <iostream>
#include <unordered_map>

#include "lualang.hxx"
#include "store.hxx"
#include "errors.hxx"

using namespace std;
using namespace antlr4;

typedef std::unordered_map<string, shared_ptr<GenieParser>> FragmentsMap;
vector<string> fragmentsSearchPaths;
ErrorListener el;

struct Parsed {
  FragmentsMap fragments;
  shared_ptr<GenieParser> featureFile;
};

typedef shared_ptr<Parsed> ParsedPtr;

void buildFragmentParseTree(shared_ptr<Parsed> parsed, string asString, string filename) {
  std::cout << "parsing file " << filename << std::endl;
  std::ifstream stream;
  stream.open(filename);

  ANTLRInputStream input(stream);
  GenieLexer lexer(&input);
  lexer.removeErrorListeners();
  
  CommonTokenStream tokens(&lexer);
  GenieParser *parser = new GenieParser(&tokens);
  parser->removeErrorListeners();
  parser->addErrorListener(&el);
  
  parsed->fragments[asString] = shared_ptr<GenieParser>(parser);
  stream.close();
}

shared_ptr<Parsed> buildFeatureParseTree(string filename) {
  ParsedPtr parsedPtr = shared_ptr<Parsed>(new Parsed());
  std::ifstream stream;
  stream.open(filename);

  ANTLRInputStream input(stream);
  GenieLexer lexer(&input);
  lexer.removeErrorListeners();
  
  CommonTokenStream tokens(&lexer);
  GenieParser *parser = new GenieParser(&tokens);
  parser->removeErrorListeners();
  parser->addErrorListener(&el);

  GenieParser::FeatureFileContext* ptr = parser->featureFile();
  if (ptr) {
    parsedPtr->featureFile = shared_ptr<GenieParser>(parser);
    std::vector<GenieParser::UsesFragmentContext*> uv = ptr->usesFragment();
    if (uv.size() > 0) {
      for (int i = 0; i < uv.size(); i++) {
        // TODO: Check if this is a duplicate FRAGNAME
        string fragPath;
        bool fragAvbl = false;
        for(string fragSPath : fragmentsSearchPaths) {
            fragPath = fragSPath + "/" + uv[i]->qFragPath()->fragPath()->getText();
            std::cout << "searching fragment at " << fragPath << std::endl;
            if (std::filesystem::exists(fragPath)) {
                fragAvbl = true;
                break;
            }
        }

        if (!fragAvbl) {
            std::cout << "fragment file " << uv[i]->qFragPath()->fragPath()->getText() << " was not found" <<std::endl;
            exit(-1);
        }
        el.pushFile(fragPath);
        buildFragmentParseTree(parsedPtr, uv[i]->FRAGNAME()->getText(), fragPath);
        el.popFile();
      }
    }
    stream.close();

    return parsedPtr;
  }
  return parsedPtr;
}

int main(int argc, const char* argv[]) {
  argparse::ArgumentParser program("genie");

  program.add_argument("filename")
      .help("input filename")
      .action([](const std::string& value) { return value; });
  try {
    program.parse_args(argc, argv);
  } catch (const std::runtime_error& err) {
    std::cout << err.what() << std::endl;
    std::cout << program;
    exit(0);
  }
  string file = program.get<string>("filename");
  std::filesystem::path filePath(file);
  fragmentsSearchPaths.push_back(std::filesystem::canonical(filePath.parent_path()).string());
  el.pushFile(file);
  buildFeatureParseTree(file);
  el.popFile();
  if (el.hasErrors()) {
    std::cout << el << std::endl;
    return -1;
  } else {

  }
  return 0;
}
