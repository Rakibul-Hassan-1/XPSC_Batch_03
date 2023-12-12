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
    for (int j = 1; j * j <= n; j++)
    {
        if (n % j == 0)
        {
            d.push_back(j);
            if (j != (n / j))
            {
                d.push_back(n / j);
            }
        }
    }
    return d;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> frq(n + 1);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        frq[x]++;
    }
    int ans = 0;
    for (int i = 2; i <= 2 * n; i++)
    {
        int cur = 0;
        for (int j = 1; j < (i + 1) / 2; j++)
        {
            if (i - j > n)
                continue;

            cur += min(frq[j], frq[i - j]);
        }
        if (i % 2 == 0)
            cur += frq[i / 2] / 2;
        ans = max(ans, cur);
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
