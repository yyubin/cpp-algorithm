#include <iostream>
#include <vector>
#include <string>
using namespace std;

int N, M;
int dx[4] = {1, -1, 0 , 0};
int dy[4] = {0, 0, -1, 1};

int arr[500][500] = {0, };
bool visited[500 + 1][500 + 1] = {false, };
int ans;

void dfs(int x, int y, int cnt, int sum) {
    if (cnt == 4) {
        ans = max(sum, ans);
        return;
    }

    visited[y][x] = true;

    for (int i=0; i<4; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
        if (visited[ny][nx]) continue;

        dfs(nx, ny, cnt+1, sum + arr[ny][nx]);
    }

    visited[y][x] = false;

    if (y-1 >= 0 && x-1 >= 0 && x+1 < M) {
        int temp = arr[y][x] + arr[y-1][x] + arr[y][x-1] + arr[y][x+1];
        ans = max(ans, temp);
    }

    if (y+1 < N && x-1 >= 0 && x+1 < M) {
        int temp = arr[y][x] + arr[y+1][x] + arr[y][x-1] + arr[y][x+1];
        ans = max(ans, temp);
    }

    if (x-1 >= 0 && y-1 >= 0 && y+1 < N) {
        int temp = arr[y][x] + arr[y][x-1] + arr[y-1][x] + arr[y+1][x];
        ans = max(ans, temp);
    }

    if (x+1 < M && y-1 >= 0 && y+1 < N) {
        int temp = arr[y][x] + arr[y][x+1] + arr[y-1][x] + arr[y+1][x];
        ans = max(ans, temp);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++)
            cin >> arr[i][j];
    }

    for(int y = 0; y < N; y++){
        for(int x = 0; x < M; x++){
            dfs(x, y, 1, arr[y][x]);
        }
    }

    cout << ans;

}