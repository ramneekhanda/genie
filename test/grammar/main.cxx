#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <antlr4-runtime.h>
#include "../../src/grammar/GenieLexer.h"
#include "../../src/grammar/GenieParser.h"
#include "code.hxx"
#include <doctest/doctest.h>

using namespace std;
using namespace antlr4;

TEST_CASE("test basic function") {
    std::string rawCode(code);
    ANTLRInputStream input(rawCode);
    GenieLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    GenieParser parser(&tokens);
    parser.feature_file();
}
