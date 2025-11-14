#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int arr[n];
    fill_n(arr, n+1, 0);

    for (int i=1; i<=n; ++i) {
        int tmp;
        cin >> tmp;
        arr[i] = tmp;
    }

    for (int i=1; i<n+1; ++i) {
        arr[i] += arr[i-1];
    }

    while (m--) {
        int a, b;
        cin >> a >> b;
        cout << arr[b] - arr[a-1] << '\n';
    }

}