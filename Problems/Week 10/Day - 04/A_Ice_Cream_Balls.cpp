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
    ll n;
    cin >> n;
    ll l = 1, r = 2648956421;
    ll mid;
    ll ans = -1;

    while (l < r)
    {
        mid = (l + r + 1) / 2;
        ll p = mid * (mid - 1) / 2;
        if (p <= n)
        {
            l = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << l + n - (l * (l - 1) / 2) << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
