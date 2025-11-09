#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<pair<int, string>> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int age;
        string name;
        cin >> age >> name;

        v.push_back({age, name});
    }

    stable_sort(v.begin(), v.end(),
            [](const auto& a, const auto& b) {
                return a.first < b.first;
            });

    for (auto& [age, name] : v) {
        cout << age << ' ' << name << '\n';
    }

    return 0;
}