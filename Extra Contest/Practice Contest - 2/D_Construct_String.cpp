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
    int n = 1, m = 0;
    string s, res;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        res.push_back(s[i]);
        
        if (i < n - 2 && s[i] == s[i + 1] && s[i] == s[i + 2])
        {
            while (i < n - 2 && s[i] == s[i + 2] && s[i] == s[i + 1])
                i += 2;
        }
    }
    cout << res << "\n";
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
