#include <iostream>
using namespace std;

int board[129][129];
int cnt0 = 0;
int cnt1 = 0;

void recursion(int x, int y, int now) {
    bool cut = false;
    int target = board[x][y];
    for (int i=x; i<x+now; ++i) {
        if (cut) break;
        for (int j=y; j<y+now; ++j) {
            if (board[i][j] != target) {
                cut = true;
            }
        }
    }

    if (cut) {
        int half = now/2;
        recursion(x, y, half);
        recursion(x + half , y, half);
        recursion(x, y + half, half);
        recursion(x + half, y + half, half);
        return;
    }

    if (target == 1) {
        cnt1 += 1;
    } else {
        cnt0 += 1;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            cin >> board[i][j];
        }
    }

    recursion(0, 0, n);
    cout << cnt0 << '\n';
    cout << cnt1 << '\n';
}