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
    int n;
    cin >> n;
    vector<int> ans;
    ans.push_back(n);
    while (__builtin_popcount(n) > 1)
    {
        int p = __builtin_ctz(n);
        n -= (1 << p);
        ans.push_back(n);
    }
    while (n > 1)
    {
        n /= 2;
        ans.push_back(n);
    }
    cout << ans.size() << endl;
    for (auto val : ans)
        cout << val << " ";

    cout << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
