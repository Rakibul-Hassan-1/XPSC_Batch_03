#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define ff first
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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> even, odd;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            even.push_back(a[i]);

        else
            odd.push_back(a[i]);
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    bool okE = true, okO = true;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            continue;
        if (odd.empty() || odd[0] >= a[i])
        {
            okE = false;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
            continue;
        if (odd.empty() || odd[0] >= a[i])
        {
            okO = false;
            break;
        }
    }

    if (okE || okO)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
