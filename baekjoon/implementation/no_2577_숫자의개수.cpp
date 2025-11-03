using namespace std;
#include <iostream>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    long long res = n1 * n2 * n3;

    for (int i = 0; i <= 9; ++i) {
        int cnt = 0;
        for (int j = 0; j < to_string(res).size(); ++j) {
            if (to_string(res)[j] == to_string(i)[0]) {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}