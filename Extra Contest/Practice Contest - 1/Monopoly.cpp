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
    vector<int> a(4);
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    sort(a.begin(), a.end());

    if (a[3] > a[1] + a[2] + a[0])
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
