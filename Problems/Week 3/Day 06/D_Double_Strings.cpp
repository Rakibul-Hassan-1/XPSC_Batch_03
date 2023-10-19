//....................................<In the name of Allah>...............................//

//.................................<Bismillahir Rahmanir Rahim>...................................//
// Author : Rakibul Hassan

#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define ff first
#define ss second
#define endl '\n'
#define TestCase() \
    int tc;        \
    cin >> tc;     \
    while (tc--)
#define fasterIO()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s[n];
    map<string, bool> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        mp[s[i]] = true;
    }
    for (int i = 0; i < n; i++)
    {
        bool ok = false;
        for (int j = 1; j < s[i].length(); j++)
        {
            string pref = s[i].substr(0, j);
            string suff = s[i].substr(j, s[i].length() - j);

            // cout << pref << "\n";
            // cout << suff << "\n";

            if (mp[pref] && mp[suff])
            {
                ok = true;
                // for (auto x : mp)
                // {
                //     cout << x.first << " " << x.second << endl;
                // }
            }
        }
        cout << ok;
    }
    cout << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
