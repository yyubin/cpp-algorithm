using namespace std;
#include <iostream>

int main() {
    iostream::sync_with_stdio(false);
    cin.tie(nullptr);

    int max = 0;
    int idx = 0;

    for (int i = 0; i < 9; ++i) {
        int num;
        cin >> num;

        if (num > max) {
            max = num;
            idx = i + 1;
        }
    }
    printf("%d\n%d\n", max, idx);
    return 0;
}