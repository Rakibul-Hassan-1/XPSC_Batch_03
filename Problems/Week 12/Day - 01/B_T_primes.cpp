#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
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

bool isPrime(ll x)
{
    ll cnt = 0;
    for (ll j = 2; j <= sqrt(x); j++)
    {
        if (x % j == 0)
        {
            cnt++;
            if (cnt == 1)
                return false;
        }
    }
    if (cnt == 0)
        return true;
    else
        return false;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
        cin >> a[i];

    for (ll i = 0; i < n; i++)
    {
        ll z = sqrt(a[i]);
        if (z * z != a[i] || a[i] == 1)
            cout << "NO" << endl;
        else
        {
            if (isPrime(z))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
