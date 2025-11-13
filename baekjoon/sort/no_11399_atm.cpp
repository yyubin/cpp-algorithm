#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v;

    while (n--) {
        int p;
        cin >> p;
        v.push_back(p);
    }

    sort(v.begin(), v.end());

    int res = 0;
    int now = 0;

    for (auto i: v) {
        res += (i + now);
        now += i;
    }

    cout << res << '\n';
}