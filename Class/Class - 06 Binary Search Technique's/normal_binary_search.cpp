// time complexity of this binary search is O(NlogN)

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
    int l = 0;
    int r = n - 1;
    int ans = -1;

    while (l <= r)
    {
        // instead of determining mid like thise we can calculate mid by this, here esialy handle the integer overflow
        
        // mid = l+(r-l)/2;
        // int mid = (l + r) / 2;

        int mid = l + (r - l) / 2;

        if (v[mid] == x)
        {
            // cout << mid + 1 << endl;
            ans = mid;
            break;
        }
        if (v[mid] > x)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;

    return 0;
}