// better ans findin by binary search

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int x;
    cin >> x;

    sort(v.begin(), v.end());
    int ans = -1;
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (v[mid] == x)
        {
            ans = mid + 1;
            r = mid - 1;
        }
        else if (v[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;

    return 0;
}