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
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a(n);
    vector<int> b(n), ans(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }

    for (auto &i : b)
        cin >> i;

    sort(b.begin(), b.end());
    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        ans[a[i].second] = b[i];
    }
    for (auto i : ans)
        cout << i << " ";

    cout << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
