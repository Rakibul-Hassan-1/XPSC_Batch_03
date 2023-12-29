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
    int n, m;
    cin >> n >> m;

    if (n > m)
    {
        no;
        return;
    }

    vector<int> ans(n + 1);
    int sum = 0;

    if (n % 2 == 0 and m % 2 == 0)
    {
        yes;
        for (int i = 1; i <= n - 2; i++)
        {
            ans[i] = 1;
            sum++;
        }
        ans[n - 1] = (m - sum) / 2;
        ans[n] = ans[n - 1];
    }
    else if ((n % 2 == 1 and m % 2 == 0) or (n % 2 == 1 and m % 2 == 1))
    {
        yes;
        for (int i = 1; i <= n - 1; i++)
        {
            ans[i] = 1;
            sum++;
        }
        ans[n] = m - sum;
    }
    else if (n % 2 == 0 and m % 2 == 1)
    {
        no;
        return;
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
