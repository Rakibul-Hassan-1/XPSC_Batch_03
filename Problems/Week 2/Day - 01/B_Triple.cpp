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
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> fre(n + 1, 0);

    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        fre[v[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (fre[i] >= 3)
        {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
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
