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
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    if (count(b.begin(), b.end(), 0) == n)
    {
        yes;
        return;
    }

    ll diff = -1;
    int ok = 1;
    
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 0)
            continue;
        if (a[i] < b[i])
        {
            ok = 0;
            break;
        }

        diff = a[i] - b[i];
    }

    if (!ok)
    {
        no;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = max(0ll, a[i] - diff);
        if (a[i] != b[i])
            ok = 0;
    }

    (ok ? yes : no);
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
