#include <iostream>
#include <sstream>
#include <map>
#include <string>
using namespace std;

map<string, int> variables;

void interpret(string statement) {
  istringstream iss(statement);
  string command;
  iss >> command;

  //cout << "\n\n" << command << "\n";

  if (command == "LET") {
    string varName;
    iss >> varName;

    cout << varName << "\n";    
    
    if (variables.find(varName) == variables.end()) {
        variables[varName] = 0;
    }
    
    cout << variables[varName] << "\n";
  }
}

int main() {
    while (true) {
        string input;
        cout << "> ";
        getline(cin, input);

        if (input == "QUIT") {
            break;
        }

        interpret(input);
    }

    return 0;
}
