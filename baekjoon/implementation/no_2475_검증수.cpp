using namespace std;
#include <iostream>
#include <vector>
#include <sstream>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    getline(cin, line);

    stringstream ss(line);
    vector<int> nums;
    string n;

    while (ss >> n) {
        nums.push_back(stoi(n));
    }

    int result = 0;

    for (int& nn : nums) {
        result += nn * nn;
    }
    printf("%d\n", result % 10);
    return 0;
}