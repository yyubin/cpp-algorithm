#include<iostream>
#include<vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<vector<int>> v(15, vector<int>(15, 0));
    for (int i=0; i<15; ++i) v[0][i] = i;

    for (int i=1; i<15; ++i) {
        for (int j=1; j<15; ++j) {
            v[i][j] = v[i-1][j] + v[i][j-1];
        }
    }

    int n;
    cin >> n;

    for (int i=0; i<n; ++i) {
        int k1, k2;
        cin >> k1;
        cin >> k2;

        cout << v[k1][k2] << '\n';
    }
    return 0;
}