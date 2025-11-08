using namespace std;
#include <iostream>
#include <string>
#include <vector>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();

    for (int i=0; i<n; ++i) {
        string line;
        getline(cin, line);
        vector<char> v;
        bool flag = false;

        for (char c: line) {
            if (c == '[' || c == '(') {
                v.push_back(c);
                continue;
            }

            if (v.empty()) {
                flag = true;
                break;
            }

            if ((c == ']' && v.back() == '[') || (c == ')' && v.back() == '(')) {
                v.pop_back();
            } else {
                flag = true;
                break;
            }

        }

        string res = !flag && v.empty() ? "YES" : "NO";
        cout << res << '\n';
    }
    return 0;
}