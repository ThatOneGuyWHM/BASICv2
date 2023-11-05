#include <iostream>
#include <sstream>
#include <map>
#include <string>
using namespace std;

map<string, double> variables; // Int variables 

void interpret(string statement) {
  istringstream iss(statement);
  string command;
  iss >> command;

  //cout << "\n\n" << command << "\n";

  if (command == "NUM") {
    string varName;
    double data;
    iss >> varName;
    iss >> data;

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
