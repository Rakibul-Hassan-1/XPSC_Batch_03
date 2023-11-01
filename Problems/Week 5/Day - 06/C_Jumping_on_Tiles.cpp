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
    string s;
    cin >> s;
    ll n = s.size();
    vector<ll> v(n);
    vector<pair<ll, ll>> v1;
    for (ll i = 1; i < n - 1; i++)
    {
        if ((s[i] >= s[0] && s[i] <= s[n - 1]) || (s[i] <= s[0] && s[i] >= s[n - 1]))
        {
            v1.push_back({s[i], i + 1});
        }
    }
    if (s[0] < s[n - 1])
    {
        sort(v1.begin(), v1.end());
    }
    else
    {
        sort(v1.begin(), v1.end(), greater<pair<ll, ll>>());
    }
    cout << abs(s[0] - s[n - 1]) << " " << v1.size() + 2 << endl;
    cout << "1 ";
    
    for (auto val : v1)
        cout << val.second << " ";

    cout << n << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
