using namespace std;
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include<algorithm>

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> board(n, vector<char>(m));

    for (int i=0; i<n; ++i) {
        string line;
        cin >> line;
        for (int j=0; j<m; j++) {
            board[i][j] = line[j];
        }
    }

    int min_ = 1e9;

    for (int i=0; i<n-7; ++i) {
        for (int j=0; j<m-7; ++j) {
            int cntW = 0, cntB = 0;
            for (int k=i; k<i+8; ++k) {
                for (int l=j; l<j+8; ++l) {
                    char expectedW = ((k + l) % 2 == 0) ? 'W' : 'B';
                    char expectedB = ((k + l) % 2 == 0) ? 'B' : 'W';
                    if (board[k][l] != expectedW) cntW++;
                    if (board[k][l] != expectedB) cntB++;
                }
            }
            min_ = min({min_, cntW, cntB});
        }
    }
    printf("%d\n", min_);
    return 0;
}