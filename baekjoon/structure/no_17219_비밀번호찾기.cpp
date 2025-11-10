#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    unordered_map<string, string> map;

    while (n--) {
        string l1, l2;
        cin >> l1 >> l2;
        map.insert({l1, l2});
    }

    while (m--) {
        string l;
        cin >> l;

        cout << map[l] << '\n';
    }
}