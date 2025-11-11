#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    unordered_map<int, string> nmap;
    unordered_map<string, int> smap;

    int i = 0;
    while (n--) {
        string l;
        cin >> l;

        i++;
        smap[l] = i;
        nmap[i] = l;
    }

    while (m--) {
        string l;
        cin >> l;

        if (isdigit(l[0])) {
            int num = stoi(l);
            cout << nmap[num] << '\n';
        } else {
            cout << smap[l] << '\n';
        }

    }
}
