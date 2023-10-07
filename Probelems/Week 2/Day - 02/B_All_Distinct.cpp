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
    set<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.insert(x);
    }
    if ((n - a.size()) % 2 == 0)
    {
        cout << a.size() << endl;
    }
    else
    {
        cout << a.size() - 1 << endl;
    }
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
