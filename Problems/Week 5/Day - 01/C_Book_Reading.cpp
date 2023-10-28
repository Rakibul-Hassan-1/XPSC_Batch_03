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
    ll n, m;
    cin >> n >> m;
    vector<int> cycle;

    // value of m can be greter than value of n , so the loop runs infinitely until a cycle exists.
    for (ll i = m;; i += m)
    {
        cycle.push_back(i % 10);
        if (i % 10 == 0)
            break;
    }

    ll sum = 0, div, rem, ans = 0;
    for (auto value : cycle)
        sum += value;

    div = (n / m) / cycle.size();
    rem = (n / m) % cycle.size();
    ans += (div * sum);

    for (int i = 0; i < rem; i++)
        ans += cycle[i];

    cout << ans << '\n';
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
