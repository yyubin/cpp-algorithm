#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, m;
    cin >> n >> m;

    int trees[n];
    for (int i=0; i<n; ++i) {
        int tmp;
        cin >> tmp;
        trees[i] = tmp;
    }

    long long left = 0;
    long long right = 1e9;
    long long result = 0;

    while (left <= right) {
        long long mid = (left + right)/2;

        long long tmp_m = 0;
        for (auto i: trees) {
            if (i - mid > 0) {
                tmp_m += i - mid;
            }
        }

        if (tmp_m >= m) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << result;
}
