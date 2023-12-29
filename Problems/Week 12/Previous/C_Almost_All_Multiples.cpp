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
    int n, x;
    cin >> n >> x;

    if (n % x != 0)
    {
        cout << -1 << endl;
        return;
    }

    if (n == x)
    {
        cout << x << " ";
        for (int i = 2; i < n; i++)
        {
            cout << i << " ";
        }
        cout << 1 << endl;
        return;
    }

    vector<int> ans(n + 1);
    ans[n] = 1, ans[1] = x;

    for (int i = 2; i < n; i++)
        ans[i] = i;

    ans[x] = n;
    
    for (int i = 2; i < n; i++)
    {
        if (i % x == 0 and n % i == 0)
        {
            swap(ans[i], ans[x]);
            x = i;
        }
    }

    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    cout << endl;
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
