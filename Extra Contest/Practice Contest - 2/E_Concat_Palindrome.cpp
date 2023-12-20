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
    int n = 0, m = 0, ch[26] = {0}, odd = 0;
    string s1, s2;
    cin >> n >> m >> s1 >> s2;
    string a = s1, b = s2;
    if (n < m)
        swap(a, b);

    for (char &c : a)
        ch[c - 'a']++;
    for (char &c : b)
        ch[c - 'a']--;

    for (auto c : ch)
    {
        if (c < 0)
        {
            yes;
            break;
        }
        odd += c % 2 != 0;
    }
    if (odd <= 1)
    {
        yes;
        return;
    }
    else
    {
        no;
        return;
    }
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
