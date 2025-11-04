using namespace std;
#include <iostream>
#include <vector>
#include <sstream>
#include <string>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<string> st;
    string cmd, x;

    while (n--) {
        cin >> cmd;
        if (cmd == "push") cin >> x, st.push_back(x);
        else if (cmd == "pop") {
            cout << (st.empty() ? -1 : stoi(st.back())) << '\n';
            if (!st.empty()) st.pop_back();
        }
        else if (cmd == "size") cout << st.size() << '\n';
        else if (cmd == "empty") cout << st.empty() << '\n';
        else cout << (st.empty() ? -1 : stoi(st.back())) << '\n';
    }
}
