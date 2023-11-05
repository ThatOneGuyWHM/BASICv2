
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

void parse(std::vector<std::string> tokens, std::map<std::string, double>& variables) {
    string command;
    command = tokens[0];
    
    if (command == "NUM") {
        string varName;
        double data;
        varName = tokens[1];
        data = stod(tokens[2]);

        cout << varName << "\n";    
        
        if (variables.find(varName) == variables.end()) {
        variables[varName] = data;
        }
        else {
        cout << "Variable already initialised";
        }
        cout << variables[varName] << "\n";
    }
}