#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, x;
    cin >> n >> x;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (k != x)
        {
            arr.push_back(k);
        }
    }
    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}