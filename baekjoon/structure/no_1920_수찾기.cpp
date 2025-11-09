using namespace std;
#include <iostream>
#include <unordered_set>
#include <vector>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    vector<int> nv, mv;
    cin >> n;

    for (int i=0; i<n; ++i) {int now; cin >> now; nv.push_back(now);}

    cin >> m;

    for (int i=0; i<m; ++i) {int now; cin >> now; mv.push_back(now);}

    unordered_set<int> s;
    for (int i: nv) {
        s.insert(i);
    }

    for (int i: mv) {
        if (s.find(i) != s.end()) {
            cout << "1" << '\n';
            continue;
        }
        cout << "0" << '\n';
    }

    return 0;
}