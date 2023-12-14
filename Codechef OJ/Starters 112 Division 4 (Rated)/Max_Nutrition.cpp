#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
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
    vector<int> a(n), v(n);
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; ++i)
        mp[a[i]] = max(mp[a[i]], v[i]);

    int ans = 0;
    for (auto ft : mp)
    {
        if (ft.second > 0)
            ans += ft.second;
    }

    cout << ans << endl;
}

int main()
{
    fasterIO();
    TestCase() solve();
    return 0;
}
