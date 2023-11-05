#include <vector>
#include <string>
#include <map>
#include "lexer.cpp"
#include "parser.cpp"

void interpret(std::string statement, std::map<std::string, double>& variables) {
    std::vector<std::string> tokens = tokenize(statement);
    parse(tokens, variables);
}
