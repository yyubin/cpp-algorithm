using namespace std;
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <regex>

string rtrim(string &str){
    return regex_replace(str, regex("\\s+$"), "");
}

int main() {
    while (true) {
        string line;
        getline(cin, line);

        if (rtrim(line) == ".") {
            break;
        }

        vector<char> stack;
        bool flag = false;

        for (char c: line) {
            if (c == '(' || c == '[') {
                stack.push_back(c);
                continue;
            }
            if (c == ')' || c == ']') {
                 if (stack.size() == 0) {
                     flag = true;
                     break;
                 }
                 char last = stack.back();
                 if (c == ')') {
                     if (last == '(') {
                         stack.pop_back();
                     } else {
                         flag = true;
                         break;
                     }
                 } else {
                     if (last == '[') {
                         stack.pop_back();
                     } else {
                         flag = true;
                         break;
                     }
                 }
            }
        }

        string res = (!flag && stack.size() == 0) ? "yes" : "no";
        cout << res << '\n';
    }
    return 0;
}