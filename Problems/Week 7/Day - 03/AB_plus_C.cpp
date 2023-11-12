#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define ff first
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ss second
#define mx 1000000
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
    ll n;
    cin >> n;
    if (n > 1)
    {
        if (n <= 1e6)
            cout << 1 << " " << 1 << " " << n - 1 << endl;
        else if (n > 1e6 && n % mx != 0)
            cout << mx << " " << n / mx << " " << n % mx << endl;
        else
            cout << mx << " " << n / mx - 1 << " " << mx << endl;
    }
    else
        cout << -1 << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
