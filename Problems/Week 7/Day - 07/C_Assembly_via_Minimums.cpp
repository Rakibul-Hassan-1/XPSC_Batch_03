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
    ll n;
    cin >> n;

    ll x = (n * (n - 1)) / 2;
    vi v(x);
    for (int i = 0; i < x; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    for (int i = 0; i < x; i += n)
    {
        cout << v[i] << " ";
        n--;
    }
    cout << v[x - 1] << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
