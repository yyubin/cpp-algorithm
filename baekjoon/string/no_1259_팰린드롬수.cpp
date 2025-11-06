using namespace std;
#include <iostream>
#include <string>
#include <algorithm>

int main() {
    while (true) {
        std::string s;
        cin >> s;

        if (s == "0") break;

        string rev = s;
        reverse(rev.begin(), rev.end());

        if (s == rev) {
            cout << "yes" << "\n";
        } else {
            cout << "no" << "\n";
        }
    }
    return 0;
}