#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i=0; i<t; ++i) {
        int n;
        cin >> n;
        unordered_map<string, int> map;
        for (int j=0; j<n; ++j) {
            string s1, s2;
            cin >> s1 >> s2;

            if (map.find(s2) == map.end()) map[s2] = 0;
            map[s2] += 1;
        }

        int res = 1;
        for (auto &p : map) {
            res *= p.second + 1;
        }
        cout << res-1 << '\n';
    }
}