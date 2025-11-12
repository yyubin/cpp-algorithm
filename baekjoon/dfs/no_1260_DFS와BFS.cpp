#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <unordered_map>
#include <algorithm>
using namespace std;

unordered_map<int, vector<int>> graph;
vector<bool> visited;

void dfs(int node) {
    visited[node] = true;
    cout << node << ' ';

    for (int next: graph[node]) {
        if (!visited[next]) {
            dfs(next);
        }
    }
}

void bfs(int start) {
    deque<int> q;
    q.push_back(start);
    visited[start] = true;

    while (!q.empty()) {
        int now = q.front();
        q.pop_front();

        cout << now << ' ';

        for (int next: graph[now]) {
            if (!visited[next]) {
                visited[next] = true;
                q.push_back(next);
            }
        }

    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, v;
    cin >> n >> m >> v;

    while (m--) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (auto& [_, vec] : graph) sort(vec.begin(), vec.end());

    visited.assign(n + 1, false);
    dfs(v);
    cout << '\n';

    visited.assign(n + 1, false);
    bfs(v);
    cout << '\n';
}