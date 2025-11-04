using namespace std;
#include <iostream>
#include <vector>
#include <sstream>
#include <string>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();

    vector<string> stack;

    for (int j=0; j<n; j++) {
        string line;
        getline(cin, line);

        stringstream ss(line);
        vector<string> s;
        string command;

        while (ss >> command) {
            s.push_back(command);
        }

        if (s[0] == "push") {
            stack.push_back(s[1]);
        } else if (s[0] == "pop") {
            if (stack.empty()) {
                printf("-1\n");
            } else {
                printf("%s\n", stack.back().c_str());
                stack.pop_back();
            }
        } else if (s[0] == "size") {
            printf("%lu\n", stack.size());
        } else if (s[0] == "empty") {
            if (stack.empty()) {
                printf("%d\n", 1);
            } else {
                printf("%d\n", 0);
            }
        } else {
            if (stack.empty()) {
                printf("%d\n", -1);
            } else {
                printf("%s\n", stack.back().c_str());
            }
        }
    }
    return 0;
}