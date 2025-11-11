#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> v;

    while (n--) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    int res = 0;
    for (int i=v.size()-1; i>-1; --i) {
        int m = k/v[i];
        if (m > 0) {
            res += m;
            k %= v[i];
        }
    }
    cout << res;
}