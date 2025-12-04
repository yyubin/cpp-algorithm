using namespace std;
#include <iostream>
#include <deque>
#include <vector>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int c, t;
    cin >> c >> t;
    vector<vector<int>> graph(c+1);

    while (t--) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    deque<int> q;
    vector<bool> visited(c+1, false);
    q.push_back(1);
    visited[1] = true;

    while (q.size() > 0) {
        int now = q.front();
        q.pop_front();
        for (auto nxt: graph[now]) {
            if (!visited[nxt]) {
                visited[nxt] = true;
                q.push_back(nxt);
            }
        }
    }

    int res = 0;
    for (int i=2; i<c+1; i++) {
        if (visited[i]) {
            res++;
        }
    }

    cout << res;
}