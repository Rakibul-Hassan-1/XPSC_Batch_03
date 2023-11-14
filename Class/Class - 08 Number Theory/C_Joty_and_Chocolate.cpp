#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FI()                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}

ll lcm(ll a, ll b)
{
    return ((a / gcd(a, b)) * b);
}

int main()
{
    FI()

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll ans = 0;
    ans += ((n / a) * p);
    ans += ((n / b) * q);
    ll LCM = lcm(a, b), same;
    same = n / LCM;
    ans -= (same * (p + q));
    ans += (same * (max(p, q)));
    cout << ans << endl;

    return 0;
}