#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> li(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> li[i];
    }
    for (int i = 0; i < n; ++i)
    {
        if (li[i] < x)
        {
            cout << li[i] << ' ';
        }
    }
    return 0;
}