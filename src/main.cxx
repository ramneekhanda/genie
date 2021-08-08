#include <GenieLexer.h>
#include <GenieParser.h>
#include <antlr4-runtime.h>

#include <argparse/argparse.hpp>
#include <filesystem>
#include <iostream>
#include <unordered_map>

#include "lualang.hxx"
#include "store.hxx"

using namespace std;
using namespace antlr4;

typedef std::unordered_map<string, shared_ptr<GenieParser::FragmentsFileContext>> FragmentsMap;
vector<string> fragmentsSearchPaths;

struct Parsed {
  GenieParser::FeatureFileContext* featureFile;
  FragmentsMap fragments;
};

typedef shared_ptr<Parsed> ParsedPtr;

void buildFragmentParseTree(shared_ptr<Parsed> parsed, string asString, string filename) {
  std::cout << "parsing file " << filename << std::endl;
  std::ifstream stream;
  stream.open(filename);

  ANTLRInputStream input(stream);
  GenieLexer lexer(&input);

  CommonTokenStream tokens(&lexer);
  GenieParser parser(&tokens);

  GenieParser::FragmentsFileContext* ptr = parser.fragmentsFile();
  parsed->fragments[asString] = shared_ptr<GenieParser::FragmentsFileContext>(ptr);
  stream.close();
}

shared_ptr<Parsed> buildFeatureParseTree(string filename) {
  ParsedPtr parsedPtr = shared_ptr<Parsed>(new Parsed());
  std::ifstream stream;
  stream.open(filename);

  ANTLRInputStream input(stream);
  GenieLexer lexer(&input);

  CommonTokenStream tokens(&lexer);
  GenieParser parser(&tokens);

  GenieParser::FeatureFileContext* ptr = parser.featureFile();
  if (ptr) {
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
        buildFragmentParseTree(parsedPtr, uv[i]->FRAGNAME()->getText(), fragPath);
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
  std::cout << std::filesystem::canonical(filePath.parent_path()).string() << std::endl;
  fragmentsSearchPaths.push_back(std::filesystem::canonical(filePath.parent_path()).string());
  buildFeatureParseTree(file);
  return 0;
}
