#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <deque>
#include <cctype>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string p; int n; string s;
        cin >> p;
        cin >> n;
        cin >> s;

        deque<int> v;

        string num = "";
        for (char c: s) {
            if (isdigit(c)) {
                num += c;
            } else if (!num.empty()) {
                v.push_back(stoi(num));
                num.clear();
            }
        }

        bool errFlag = false; bool rev = false;

        for (char c: p) {
            if (c == 'R') {
                rev = !rev;
            } else if (c == 'D') {
                if (!v.empty()) {
                    if (rev) {
                        v.pop_back();
                    } else {
                        v.pop_front();
                    }
                } else {
                    errFlag = true;
                    break;
                }
            }
        }

        if (errFlag) {
            cout << "error" << '\n';
        } else {
            cout << '[';
            if (rev) {
                for (auto i=v.rbegin(); i != v.rend(); i++) {
                    if (i != v.rbegin()) {
                        cout << ',';
                    }
                    cout << *i;
                }

            } else {
                for (auto i=v.begin(); i != v.end(); i++) {
                    if (i != v.begin()) {
                        cout << ',';
                    }
                    cout << *i;
                }
            }

            cout << ']' << '\n';
        }
    }

}