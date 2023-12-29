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
    int x, y, z;
    cin >> x >> y >> z;
    int tails = z / 2;
    int paint = x * y;
    int ans = tails / paint;
    if (paint <= tails)
    {
        cout << ans << endl;
    }
    else if (paint > tails)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
    }
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
