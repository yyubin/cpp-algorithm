using namespace std;
#include <iostream>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    cout << result << '\n';
    return 0;
}