#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define ff first
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
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
    ll a, b;
    cin >> a >> b;
    ll g = __gcd(a, b);
    bool flag = true;
    while (b > 1)
    {
        if (g == 1)
        {
            flag = false;
            break;
        }
        b /= g;
        g = __gcd(b, g);
    }
    if (flag)
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
