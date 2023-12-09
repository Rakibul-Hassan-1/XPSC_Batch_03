#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define all(a) (a).begin(), (a).end()
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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (k % 2 == 0)
    {
        sort(all(s));
        cout << s << endl;
        return;
    }
    string s1, s2;

    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            s2.push_back(s[i]);
        }
        else
        {
            s1.push_back(s[i]);
        }
    }
    sort(all(s2));
    sort(all(s1));
    ll odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            cout << s2[even];
            even++;
        }
        else
        {
            cout << s1[odd];
            odd++;
        }
    }
    cout << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
