using namespace std;
#include <iostream>
#include <vector>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v;
    double max = 0;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);

        if ((double) x > max) {
            max = x;
        }
    }

    double res = 0;

    for (int i = 0; i < n; ++i) {
        res += (double) v[i] / max * 100.0;
    }

    printf("%f\n", res / n);
    return 0;
}