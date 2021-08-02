#define DOCTEST_CONFIG_NO_UNPREFIXED_OPTIONS
#define DOCTEST_CONFIG_IMPLEMENT

#include <GenieLexer.h>
#include <GenieParser.h>
#include <antlr4-runtime.h>
#include <doctest/doctest.h>

#include <argparse/argparse.hpp>
#include <filesystem>
#include <iostream>

#include "code.hxx"

using namespace std;
using namespace antlr4;

class dt_removed {
  std::vector<const char *> vec;

 public:
  dt_removed(const char **argv_in) {
    for (; *argv_in; ++argv_in)
      if (strncmp(*argv_in, "--dt-", strlen("--dt-")) != 0)
        vec.push_back(*argv_in);
    vec.push_back(NULL);
  }

  int argc() { return static_cast<int>(vec.size()) - 1; }
  const char **argv() { return &vec[0]; }  // Note: non-const char **:
};

struct ErrorListener : public ANTLRErrorListener {
  vector<string> errors;

  ErrorListener() {}
  virtual ~ErrorListener() {}

  virtual void syntaxError(Recognizer *recognizer, Token *offendingSymbol, size_t line,
                           size_t charPositionInLine, const std::string &msg, std::exception_ptr e) override {
    errors.push_back("error [" + to_string(line) + ", " + to_string(charPositionInLine) + "]: " + msg);
  }

  virtual void reportAmbiguity(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex, size_t stopIndex, bool exact,
                               const antlrcpp::BitSet &ambigAlts, atn::ATNConfigSet *configs) override {
    errors.push_back("ambiguity error");
  }

  virtual void reportAttemptingFullContext(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex, size_t stopIndex,
                                           const antlrcpp::BitSet &conflictingAlts, atn::ATNConfigSet *configs) override {
  }

  virtual void reportContextSensitivity(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex, size_t stopIndex,
                                        size_t prediction, atn::ATNConfigSet *configs) override {
  }
};

vector<string> test_files;

void checkGrammar(string filename) {
  std::ifstream stream;
  stream.open(filename);
  ErrorListener e;
  ANTLRInputStream input(stream);
  GenieLexer lexer(&input);
  lexer.addErrorListener(&e);
  CommonTokenStream tokens(&lexer);
  GenieParser parser(&tokens);
  parser.addErrorListener(&e);
  parser.featureFile();
  CHECK_MESSAGE(e.errors.size() == 0, e.errors.size(), " errors found in file ", filename);
}

TEST_CASE("test basic function") {
  for (auto file : test_files) {
    CAPTURE(file);
    checkGrammar(file);
  }
}

int setup(int argc, const char **argv) {
  argparse::ArgumentParser program("genie tests");
  program.add_argument("-p", "--positive_cases")
      .required()
      .remaining()
      .help("path for the positive cases.");

  try {
    program.parse_args(argc, argv);  // Example: ./main --query_point 3.5 4.7 9.2
  } catch (const std::runtime_error &err) {
    std::cout << err.what() << std::endl;
    std::cout << program;
    exit(0);
  }
  test_files = program.get<vector<string>>("--positive_cases");

  return EXIT_SUCCESS;
}

int main(int argc, const char **argv) {
  doctest::Context context(argc, argv);
  dt_removed args(argv);
  setup(args.argc(), args.argv());

  int test_result = context.run();  // run queries, or run tests unless --no-run

  if (context.shouldExit())  // honor query flags and --exit
    return test_result;
  return test_result;  // combine the 2 results
}