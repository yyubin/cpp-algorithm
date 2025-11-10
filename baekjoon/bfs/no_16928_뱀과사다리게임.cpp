#include <iostream>
#include <vector>
#include <unordered_map>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    unordered_map<int, int> map;
    deque<pair<int, int>> q;
    vector<bool> visited(101, false);

    for (int i=0; i<n+m; ++i) {
        int x, y;
        cin >> x >> y;
        map.insert(make_pair(x, y));
    }

    q.push_back({1, 0});
    visited[1] = true;

    while (q.size() > 0) {
        auto [now, cnt] = q.front();
        q.pop_front();

        if (now == 100) {
            cout << cnt;
            break;
        }

        for (int i=0; i<7; ++i) {
            int next = now + i;
            if (next <= 100 && !visited[next]) {
                visited[next] = true;
                if (map.find(next) != map.end()) {
                    q.push_back({map[next], cnt+1});
                } else {
                    q.push_back({next, cnt+1});
                }
            }
        }
    }

}