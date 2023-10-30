#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define ff first
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
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
    ll n;
    cin >> n;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    if (mp.size() > 2)
        no;

    else if (mp.size() == 1)
        yes;

    else
    {
        int r = 0, l = 0;
        for (auto [a, b] : mp)
        {
            if (r != 0)
                l = b;
            else
                r = b;
        }
        if (abs(r - l) <= 1)
            yes;
        else
            no;
    }
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
