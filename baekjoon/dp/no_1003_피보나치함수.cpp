using namespace std;
#include <iostream>
#include <vector>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<pair<int, int>> fibo(41, {0, 0});
    fibo[0] = make_pair(1, 0);
    fibo[1] = make_pair(0, 1);

    for (int i=2; i<41; i++) {
        fibo[i] = make_pair(fibo[i-1].first + fibo[i-2].first, fibo[i-1].second + fibo[i-2].second);
    }

    int t;
    cin >> t;

    while (t--) {
        int x; cin >> x;
        cout << fibo[x].first << ' ' << fibo[x].second << '\n';
    }
}