#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
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
    ll n, m, d;
    cin >> n >> m >> d;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] -= d;
        a[i] = max(-d, a[i]);
    }
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll sum = 0, ans = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += a[i];
        pq.push(a[i]);
        if (pq.size() > m)
        {
            ll x = pq.top();
            pq.pop();
            sum -= (x + d);
        }
        ans = max(ans, sum);
    }
    cout << ans << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
