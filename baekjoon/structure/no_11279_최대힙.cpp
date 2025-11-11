#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v;
    make_heap(v.begin(), v.end());

    while (n--) {
        int x;
        cin >> x;

        if (x == 0) {
            if (v.size() == 0) {
                cout << 0 << '\n';
            } else {
                pop_heap(v.begin(), v.end());
                cout << v.back() << '\n';
                v.pop_back();
            }
            continue;
        }
        v.push_back(x);
        push_heap(v.begin(), v.end());
    }
}