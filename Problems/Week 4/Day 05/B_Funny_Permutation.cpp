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
    int n;
    cin >> n;
    if (n == 3)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 3; i <= n; i++)
            cout << i << " ";
        cout << 2 << " " << 1 << endl;
    }
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
