#include <iostream>;
#include <deque>;
#include <vector>;
#include <tuple>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> board(n, vector<int>(m));

    for (int i=0; i<n; ++i) {
        string line;
        cin >> line;
        for (int j=0; j<m; ++j) {
            board[i][j] = line[j] - '0';
        }
    }

    deque<tuple<int, int, int>> q;
    vector<int> dx = {1, -1, 0, 0};
    vector<int> dy = {0, 0, 1, -1};
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    q.push_back({0, 0, 1});
    visited[0][0] = true;

    while (!q.empty()) {
        auto [x, y, cnt] = q.front();
        q.pop_front();

        if (x == n-1 && y == m-1) {
            cout << cnt;
            break;
        }

        for (int i=0; i<4; ++i) {
            int nx = dx[i] + x;
            int ny = dy[i] + y;

            if (0 <= nx && nx < n && 0 <= ny && ny < m && !visited[nx][ny] && board[nx][ny] == 1) {
                visited[nx][ny] = true;
                q.push_back({nx, ny, cnt+1});
            }
        }
    }

}