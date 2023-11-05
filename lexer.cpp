#include <vector>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

vector<string> tokenize(string input) {
    vector<string> tokens;
    istringstream iss(input);
    string token;

    while (iss >> token) {
        tokens.push_back(token);
    }

    return tokens;
}