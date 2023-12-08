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
    string s;
    cin >> s;
    string ans = "CODETOWN";
    bool f = 0;
    int c = 0, v = 0;
    for (int i = 0; i < 7; i++)
    {
        if (i % 2 == 0)
        {
            if (!(ans[i] == 'A' || ans[i] == 'E' || ans[i] == 'I' || ans[i] == 'O' || ans[i] == 'U'))
            {
                c++;
            }
            else
            {
                v++;
            }
        }
    }
    if (!(ans[8] == 'A' || ans[8] == 'E' || ans[8] == 'I' || ans[8] == '0' || ans[8] == 'U'))
        c++;

    if (v == 3 && c == 5)
        yes;
    else
        no;
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
