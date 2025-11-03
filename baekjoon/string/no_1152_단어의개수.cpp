using namespace std;
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main() {
    string line;
    getline(cin, line);

    stringstream ss(line);
    vector<string> words;
    string word;

    while (ss >> word) {
        words.push_back(word);
    }

    cout << words.size() << '\n';
    return 0;
}