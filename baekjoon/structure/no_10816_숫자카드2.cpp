using namespace std;
#include <iostream>
#include <unordered_map>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<int, int> freq;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        freq[x]++;
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;
        cout << freq[x] << " ";
    }

    return 0;
}