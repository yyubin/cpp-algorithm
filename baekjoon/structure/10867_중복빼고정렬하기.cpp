#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> arr;
    for (int i = 0; i < n; ++i)
    {
        int tmp;
        cin >> tmp;
        arr.insert(tmp);
    }
    for (int elem : arr)
    {
        cout << elem << " ";
    }
    return 0;
}