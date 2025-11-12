#include <vector>
#include <deque>
#include <iostream>
using namespace std;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int N, M;

void bfs(int x, int y, vector<vector<bool>>& visited, vector<vector<int>>& graph) {
    deque<pair<int, int>> q;
    q.push_back(make_pair(x, y));
    visited[x][y] = true;

    while (!q.empty()) {
        auto [xx, yy] = q.front();
        q.pop_front();

        for (int i=0; i<4; ++i) {
            int nx = dx[i] + xx;
            int ny = dy[i] + yy;

            if (0 <= nx && nx < N && 0 <= ny && ny < M && !visited[nx][ny] && graph[nx][ny] == 1) {
                visited[nx][ny] = true;
                q.push_back(make_pair(nx, ny));
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> M >> N >> k;

        vector<pair<int, int>> cabbage;
        vector<vector<int>> graph(N, vector<int>(M, 0));
        vector<vector<bool>> visited(N, vector<bool>(M, false));

        while (k--) {
            int x, y;
            cin >> x >> y;
            cabbage.push_back(make_pair(x, y));
            graph[y][x] = 1;
        }

        int res = 0;

        for (int i=0; i<N; ++i) {
            for (int j=0; j<M; ++j) {
                if (graph[i][j] == 1 && !visited[i][j]) {
                    bfs(i, j, visited, graph);
                    res++;
                }
            }
        }

        cout << res << '\n';
    }
}