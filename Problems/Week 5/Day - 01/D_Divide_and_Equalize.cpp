#include <bits/stdc++.h>
#define ll long long int
#define fasterIO                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

bool AreSame(double a, double b)
{
    return fabs(a - b) < 1e-14;
}
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    ll mx = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    ll l = 1, r = mx;
    while (l <= r)
    {

        ll mid = (l + r) / 2;
        // cout << mid << " ";
        double ans = 1.0;
        for (ll i = 0; i < n; i++)
        {
            ans *= (a[i] * 1.0 / mid * 1.0);
        }
        // cout << ans << endl;
        if (AreSame(ans, 1.0))
        {
            yes;
            return;
        }
        else if (ans > 1)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    no;
}
int main()
{
    fasterIO;
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}