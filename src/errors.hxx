#include <GenieLexer.h>
#include <GenieParser.h>
#include <antlr4-runtime.h>

#include <argparse/argparse.hpp>

using namespace antlr4;
struct ErrorListener : public ANTLRErrorListener {
  ErrorListener() {}
  virtual ~ErrorListener() {}

  virtual void pushFile(const string& filename) {
    files.push(filename);
  }

  virtual void popFile() {
    files.pop();
  }
  virtual void syntaxError(Recognizer *recognizer, Token *offendingSymbol, size_t line,
                           size_t charPositionInLine, const std::string &msg, std::exception_ptr e) override {
    
    errors.push_back(tuple(files.top(), line, charPositionInLine, msg));
  }

  virtual void reportAmbiguity(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex, size_t stopIndex, bool exact,
                               const antlrcpp::BitSet &ambigAlts, atn::ATNConfigSet *configs) override {
  }

  virtual void reportAttemptingFullContext(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex, size_t stopIndex,
                                           const antlrcpp::BitSet &conflictingAlts, atn::ATNConfigSet *configs) override {
  }

  virtual void reportContextSensitivity(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex, size_t stopIndex,
                                        size_t prediction, atn::ATNConfigSet *configs) override {
  }

  bool hasErrors() {
    return errors.size() > 0;
  }

private:
  vector<std::tuple<string, int, int, string>> errors;
  std::stack<string> files;
  friend ostream& operator<<(ostream& os, const ErrorListener& e);
};


ostream& operator<<(ostream& os, const ErrorListener& e) {
  for (auto &err: e.errors) {
    os << "In file " << std::get<0>(err) << " line " << std::get<1>(err) << " col " << std::get<2>(err) << " - " << std::get<3>(err) << std::endl;
  }

  return os;
}