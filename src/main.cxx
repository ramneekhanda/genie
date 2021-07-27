#include <iostream>

#include <antlr4-runtime.h>
#include "grammar/GenieLexer.h"
#include "grammar/GenieParser.h"

using namespace std;
using namespace antlr4;

int main(int argc, const char* argv[]) {
    std::ifstream stream;
    stream.open("./tests/input_simple.genie");

    ANTLRInputStream input(stream);
    GenieLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    GenieParser parser(&tokens);
    GenieParser::Feature_fileContext* tree = parser.feature_file();

    return 0;
}
