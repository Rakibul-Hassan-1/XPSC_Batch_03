#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define ff first
#define ss second
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

void solve()
{
    ll l, r, x;
    cin >> l >> r >> x;
    ll a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0 << endl;
        return;
    }

    if (abs(b - a) >= x)
    {
        cout << 1 << endl;
        return;
    }

    if (b > a)
    {
        if (b + x <= r || a - x >= l)
            cout << 2 << endl;

        else if (a + x <= r && b - l >= x)
            cout << 3 << endl;

        else
            cout << -1 << endl;
    }
    else
    {
        if (a + x <= r or b - x >= l)
            cout << 2 << endl;

        else if (a - x >= l and r - b >= x)
            cout << 3 << endl;

        else
            cout << -1 << endl;
    }
    
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
