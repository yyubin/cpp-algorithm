#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    deque<pair<int, int>> q;
    q.push_back({n, 0});
    bool visited[100001] = { false };
    visited[n] = true;

    while (q.size() > 0) {
        auto [now, cnt] = q.front();
        q.pop_front();

        if (now == k) {
            cout << cnt;
            break;
        }

        for (int i: {now+1, now-1, now*2}) {
            if (0 <= i && i <= 100000 && !visited[i]) {
                visited[i] = true;
                q.push_back({i, cnt+1});
            }
        }
    }
}