#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    int v, count = 0;
    cin >> v;

    for (int i = 0; i < n; ++i)
    {
        if (nums[i] == v)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
