//....................................<In the name of Allah>...............................//

//.................................<Bismillahir Rahmanir Rahim>...................................//
// Author : Rakibul Hassan

#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define pii pair<int, int>
#define MOD = 1e9;
using namespace std;
void solve()
{
    int n, x;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v[i] = x;
    }
    bool ans = true;
    int p = v[0] % 2;

    for (int i = 0; i < n; i += 2)
    {
        if (v[i] % 2 == p)
            continue;
        ans = false;
    }

    if (n > 1)
    {
        p = v[1] % 2;

        for (int i = 1; i < n; i += 2)
        {
            if (v[i] % 2 == p)
                continue;
            else
                ans = false;
        }
    }

    if (ans == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
