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

bool solve()
{
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    if (n < m)
        return false;
    int p = (n - m) & 1;
    int q = 0, k = 0;

    for (int i = p; i < n; i++)
    {
        if (k == 1)
        {
            k = 0;
            continue;
        }
        if (q < m and s[i] == t[q])
            q++;
        else
            k++;
    }
    return q == m;
}
int main()
{
    fasterIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        if (solve())
            yes;
        else
            no;
    }

    return 0;
}
