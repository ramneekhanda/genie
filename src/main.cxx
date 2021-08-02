#include <iostream>

#include <antlr4-runtime.h>
#include <GenieLexer.h>
#include <GenieParser.h>

using namespace std;
using namespace antlr4;

int main(int argc, const char* argv[]) {
    std::ifstream stream;
    stream.open("./test/input_simple.genie");

    ANTLRInputStream input(stream);
    GenieLexer lexer(&input);
    
    CommonTokenStream tokens(&lexer);
    GenieParser parser(&tokens);


    parser.featureFile();

    return 0;
}
