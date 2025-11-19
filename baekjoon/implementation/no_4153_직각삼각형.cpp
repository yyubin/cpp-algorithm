#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int x, y, z;
        cin >> x >> y >> z;

        if (x == 0 && y == 0 && z == 0) {
            break;
        }

        int max_ = max({x, y, z});
        bool flag = false;
        int sum = 0;
        for (int i: {x, y, z}) {
            if (!flag && i == max_) {
                flag = true;
            } else {
                sum += i*i;
            }
        }
        if (sum == max_*max_) {
            cout << "right" << '\n';
        } else {
            cout << "wrong" << '\n';
        }
    }
}