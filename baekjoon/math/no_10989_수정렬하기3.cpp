using namespace std;
#include <iostream>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int cnt[10001] = {0};
    int n,count;
    cin >> n;

    for (int i=0; i<n; ++i) {
        cin >> count;
        cnt[count]++;
    }

    for (int i = 1; i <= 10000; ++i) {
        while (cnt[i]--) {
            cout << i << '\n';
        }
    }

    return 0;
}