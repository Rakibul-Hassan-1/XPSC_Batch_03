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
    string s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    set<int> st[n + 1];
    for (int i = 1; i <= n; i++)
        st[i].insert(i);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[i][j] == '1')
            {
                st[j + 1].insert(i + 1);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << st[i].size() << " ";
        for (auto x : st[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
