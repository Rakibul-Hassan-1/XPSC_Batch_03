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
    int n;
    vector<int> a(1000);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int res = a[1];
    for (int i = 2; i <= n; i++)
        res &= a[i];
    cout << res << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
