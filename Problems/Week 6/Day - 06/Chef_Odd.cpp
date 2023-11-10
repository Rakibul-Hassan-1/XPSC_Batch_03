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
    ll n, k;

    cin >> n >> k;

    if (n < 2 * k)
    {
        cout << "NO" << endl;
        return;
    }
    ll te = n / 2;
    ll to;

    if (n % 2 == 0)
        to = n / 2;

    else
        to = n / 2 + 1;

    ll value = to - k;

    if (value % 2 == 0)
    {
        cout << "YES" << endl;
        return;
    }
    else
        cout << "NO" << endl;

    return;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
