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
    ll x = n * 2, y = 2;
    for (ll i = 1; i <= n / 2; i++)
    {
        cout << x << " ";
        cout << y << " ";
        x -= 2;
        y += 2;
    }
    cout << endl;
    vector<ll> arr(n);
    arr[0] = 1;
    arr[n - 1] = (2 * n) - 1;
    x = (2 * n) - 3, y = 3;
    for (ll i = 1; i <= n - 2; i++)
    {
        if (i & 1)
        {
            arr[i] = x;
            x -= 2;
        }
        else
        {
            arr[i] = y;
            y += 2;
        }
    }
    for (auto x : arr)
        cout << x << " ";
    cout << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
