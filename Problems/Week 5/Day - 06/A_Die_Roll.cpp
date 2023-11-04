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
    int n, k;
    cin >> n >> k;

    int mx = max(n, k);
    int a = 7 - mx;
    int b = 6;
    for (int i = 1; i <= 6; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            a /= i;
            b /= i;
        }
    }
    cout << a << "/" << b << endl;
}
int main()
{
    fasterIO();
    // TestCase()
        solve();

    return 0;
}
