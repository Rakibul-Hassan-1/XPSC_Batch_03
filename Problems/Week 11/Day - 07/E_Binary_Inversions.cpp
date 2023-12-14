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

ll f(vector<int> &a)
{
    ll zeroes = 0, ans = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        if (a[i] == 0)
            zeroes++;
        else
            ans += zeroes;
    }
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll ans = f(a);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            a[i] = 1;
            ans = max(ans, f(a));
            a[i] = 0;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 1)
        {
            a[i] = 0;
            ans = max(ans, f(a));
            a[i] = 1;
            break;
        }
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
