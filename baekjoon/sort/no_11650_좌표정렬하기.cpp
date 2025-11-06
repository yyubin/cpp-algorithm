using namespace std;
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> v;
    for (int i=0; i<n; ++i) {
        int x, y;
        cin >> x >> y;
        v.push_back(pair<int, int>(x, y));
    }

    sort(v.begin(), v.end());
    for (int i=0; i<n; ++i) {
        cout << v[i].first << " " << v[i].second << '\n';
    }
    return 0;
}