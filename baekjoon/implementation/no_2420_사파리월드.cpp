using namespace std;
#include <iostream>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;
    cin >> a >> b;

    if (a > b) {
        cout << a - b << '\n';
    } else {
        cout << b - a << '\n';
    }
    return 0;
}