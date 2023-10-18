//....................................<In the name of Allah>...............................//

//.................................<Bismillahir Rahmanir Rahim>...................................//
// Author : Rakibul Hassan

#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define pii pair<int, int>
#define MOD = 1e9;
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    n++;
    vector<ll> a(n, 0);
    for (int i = 1; i < n; i++)
        cin >> a[i];

    vector<ll> sorted(a);

    sort(sorted.begin(), sorted.end());

    for (int i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
        sorted[i] += sorted[i - 1];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 2)
        {
            cout << sorted[r] - sorted[l - 1];
        }
        else
        {
            // for (auto x : a)
            // {
            //     cout << x << " ";
            // }
            cout << a[r] - a[l - 1];
            // cout << endl;
            // cout << a[r] << " " << a[l - 1];
        }
        cout << endl;
    }
    return 0;
}
