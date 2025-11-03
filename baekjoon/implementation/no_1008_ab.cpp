using namespace std;
#include <iostream>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b;
    cin >> a >> b;
    cout.precision(15);
    cout << a / b << '\n';
    return 0;
}