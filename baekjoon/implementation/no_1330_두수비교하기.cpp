using namespace std;
#include <iostream>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    if (a > b) {
        printf(">\n");
    } else if (a < b) {
        printf("<\n");
    } else {
        printf("==\n");
    }
    return 0;
}