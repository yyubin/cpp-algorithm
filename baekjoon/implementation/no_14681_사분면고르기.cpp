using namespace std;
#include <iostream>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a;
    cin >> b;

    if (a > 0) {
        if (b > 0) {
            cout << 1 << '\n';
        } else {
            cout << 4 << '\n';
        }
    } else {
        if (b > 0) {
            cout << 2 << '\n';
        } else {
            cout << 3 << '\n';
        }
    }
    return 0;
}