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
    int n;
    cin >> n;
    string s;
    cin >> s;
    s = '@' + s;
    vector<int> vis(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == '1')
            vis[i] = 2;
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            if (vis[j] == 0)
            {
                vis[j] = 1;
                ans += i;
            }
            else if (vis[j] == 2)
                break;
        }
    }
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
