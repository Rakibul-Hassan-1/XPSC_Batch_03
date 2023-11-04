#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define ff first
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
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
    int x, y;
    cin >> x >> y;
    if (y % x == 0)
    {
        int b = y / x;
        cout << 1 << " " << b << endl;
    }
    else
    {
        cout << 0 << " " << 0 << endl;
    }
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
