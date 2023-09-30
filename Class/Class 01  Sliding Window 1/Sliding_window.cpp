#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, w;
    cin >> n >> w;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int i = 0, j = 0, s = 0;
    vector<int> v;

    while (j < n)
    {
        s += arr[j];
        if (j >= w - 1)
        {
            v.push_back(s);
            s -= arr[i];
            i++;
        }
        j++;
    }
    int mx = INT_MIN;

    for (auto x : v)
    {
        mx = max(x, mx);
    }

    cout << mx << endl;

    return 0;
}