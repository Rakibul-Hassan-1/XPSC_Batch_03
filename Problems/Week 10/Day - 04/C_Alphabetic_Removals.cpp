#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define all(v) (v).begin(), (v).end()
#define TestCase() \
    int tc = 1;    \
    // cin >> tc;     \
    while (tc--)
#define fasterIO()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
using namespace std;

vector<int> getDivisors(int n)
{
    vector<int> d;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            d.push_back(i);
            if (i != (n / i))
            {
                d.push_back(n / i);
            }
        }
    }
    return d;
}

void solve()
{

    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }

    for (auto i : mp)
    {
        ll y = i.second;
        ll p = min(y, k);
        mp[i.first] -= p;
        k -= p;
        if (k == 0)
            break;
    }
    string ans;
    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[s[i]])
        {
            ans.push_back(s[i]);
            mp[s[i]]--;
        }
    }
    reverse(all(ans));
    cout << ans << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
