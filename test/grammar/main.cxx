#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <antlr4-runtime.h>
#include <GenieLexer.h>
#include <GenieParser.h>
#include <doctest/doctest.h>

#include "code.hxx"

using namespace std;
using namespace antlr4;

class ErrorListener : public ANTLRErrorListener
{
public:
    ErrorListener() {}
    virtual ~ErrorListener() {}

    virtual void syntaxError(Recognizer *recognizer, Token *offendingSymbol, size_t line,
                             size_t charPositionInLine, const std::string &msg, std::exception_ptr e) override
    {
        std::cout << msg << std::endl;
        throw e;
    }

    virtual void reportAmbiguity(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex, size_t stopIndex, bool exact,
                                 const antlrcpp::BitSet &ambigAlts, atn::ATNConfigSet *configs) override
    {
        throw std::exception();
    }

    virtual void reportAttemptingFullContext(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex, size_t stopIndex,
                                             const antlrcpp::BitSet &conflictingAlts, atn::ATNConfigSet *configs) override
    {
    }

    virtual void reportContextSensitivity(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex, size_t stopIndex,
      size_t prediction, atn::ATNConfigSet *configs) override {

      }
};

TEST_CASE("test basic function")
{
    std::string rawCode(code);
    ANTLRInputStream input(rawCode);
    GenieLexer lexer(&input);
    lexer.addErrorListener(new ErrorListener());
    CommonTokenStream tokens(&lexer);
    GenieParser parser(&tokens);
    parser.addErrorListener(new ErrorListener());
    parser.featureFile();
}
