using namespace std;
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int now = 0;

    vector<int> want(n);
    for (int i = 0; i < n; ++i) {
        cin >> want[i];
    }
    reverse(want.begin(), want.end());

    vector<int> stack;
    string output;
    bool flag = false;

    while (true) {
        if (want.empty()) {
            break;
        }
        if (stack.empty() || (stack.back() < want.back())) {
            for (int i=now+1; i<want.back()+1; ++i) {
                stack.push_back(i);
                output += "+\n";
            }
            now = want.back();
        } else if (stack.back() == want.back()) {
            stack.pop_back();
            want.pop_back();
            output += "-\n";
        } else {
            flag = true;
            break;
        }
    }

    if (flag) {
        cout << "NO" << '\n';
    } else {
        cout << output;
    }
}