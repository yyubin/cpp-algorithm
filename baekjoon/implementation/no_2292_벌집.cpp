using namespace std;
#include <iostream>

int main() {
    int n;
    cin >> n;

    int res = 1;
    int now = 1;

    while (true) {
        if (now >= n) {
            cout << res << "\n";
            break;
        }

        now += 6*res;
        res += 1;
    }
    return 0;
}