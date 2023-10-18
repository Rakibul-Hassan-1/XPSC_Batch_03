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
    string a, b;
    cin >> a >> b;

    bool flag = false;
    for (int i = 0, j = 0; i < a.size(); i++, j++)
    {
        if (a[i] == 'R')
        {
            if (b[j] != 'R')
            {
                flag = true;
            }
        }
        if (a[i] != 'R')
        {
            if (b[j] == 'R')
            {
                flag = true;
            }
        }
    }

    if (flag)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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
