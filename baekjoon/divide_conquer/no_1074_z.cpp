#include <iostream>
#include <cmath>
using namespace std;

int N, r, c;
int res = 0;

void rc(int x, int y, int size) {
    if (c == x && r == y) {
        cout << res;
        return;
    } else if (c < x+size && r < y+size && c>=x && r>=y) {
        rc(x, y, size/2);
        rc(x+size/2, y, size/2);
        rc(x, y+size/2, size/2);
        rc(x+size/2, y+size/2, size/2);
    } else {
        res += size * size;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> r >> c;

    rc(0, 0, pow(2, N));
}