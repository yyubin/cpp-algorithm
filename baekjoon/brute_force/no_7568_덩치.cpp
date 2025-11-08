using namespace std;
#include <iostream>
#include <vector>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> v;

    for (int i=0; i<n; ++i) {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    for (int i=0; i<n; ++i) {
        int score = 0;
        for (int j=0; j<n; ++j) {
            if (i==j) continue;
            if (v[i].first < v[j].first && v[i].second < v[j].second) {
                score++;
            }
        }
        cout << 1+score << " ";
    }
    return 0;
}