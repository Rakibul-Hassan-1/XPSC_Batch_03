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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int ans = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        while (v[i] >= v[i + 1] && v[i] > 0)
        {
            v[i] /= 2;
            ans++;
        }
        if (v[i] == v[i + 1])
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << ans << endl;
   
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
