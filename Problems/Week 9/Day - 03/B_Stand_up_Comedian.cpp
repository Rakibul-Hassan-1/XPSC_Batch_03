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

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == 0)
        cout << 1 << endl;
    else
        cout << (a + min(b, c) * 2 + min(a + 1, abs(b - c) + d)) << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
