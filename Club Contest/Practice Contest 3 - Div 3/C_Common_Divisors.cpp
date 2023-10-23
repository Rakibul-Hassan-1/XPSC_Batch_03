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

int main()
{
    fasterIO();

    int n;
    cin >> n;
    ll k = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        k = __gcd(k, x);
    }

    int ans = 0;

    for (ll i = 1; i * i <= k; i++)
    {
        if (k % i == 0)
        {
            ans++;
            if (i != k / i)
            {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
