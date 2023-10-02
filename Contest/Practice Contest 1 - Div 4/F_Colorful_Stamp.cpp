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
    int ans = 0;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != 'W')
        {
            int b = 0, r = 0;
            while (i < n && s[i] != 'W')
            {
                if (s[i] == 'R')
                    r++;
                else
                    b++;
                    
                i++;
            }

            if (b == 0 || r == 0)
            {
                ans = 1;
                break;
            }
        }
    }
    if (ans == 0)
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
