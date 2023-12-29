#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
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
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());

    // check elements all are zero or not
    if (a[0] == a.back())
    {
        cout << 0 << endl;
        return;
    }
    ll g = 0;
    int positiveCount = 0;
    int negativeCount = 0;
    for (int i = 0; i < n; i++)
    {
        a[i] -= k;
        if (a[i] > 0)
            positiveCount++;
        else if (a[i] < 0)
            negativeCount++;
        g = __gcd(g, abs(a[i]));
    }
    if (positiveCount != n && negativeCount != n)
    {
        cout << -1 << endl;
        return;
    }
    if (negativeCount == n)
        g = -g;
    ll ans = 0;
    for (int i = 0; i < n; i++)
        ans += (a[i] / g - 1);
    cout << ans << endl;
}
int main()
{
    fasterIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
