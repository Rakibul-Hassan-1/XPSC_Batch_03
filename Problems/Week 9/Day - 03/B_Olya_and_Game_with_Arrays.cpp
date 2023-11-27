#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back
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
    ll n, sum = 0;
    cin >> n;
    vector<int> v, ans;
    while (n--)
    {
        ll n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        v.pb(a[0]);
        ans.pb(a[1]);
        sum += a[1];
    }
    sort(v.begin(), v.end());
    sum += v[0];
    sort(ans.begin(), ans.end());
    sum -= ans[0];
    cout << sum << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
