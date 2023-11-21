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
    string s;
    cin >> s;
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            count++;
    }
    int ans = min(count, n - count);

    if (ans % 2)
        cout
            << "Zlatan\n";
    else
        cout << "Ramos\n";
    return;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
