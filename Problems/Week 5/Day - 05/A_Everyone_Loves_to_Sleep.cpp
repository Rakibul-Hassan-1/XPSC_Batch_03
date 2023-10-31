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
    int time, h, m;
    cin >> h >> m;
    time = 60 * h + m;
    int ans = 24 * 60;
    for (int i = 0; i < n; i++)
    {
        cin >> h >> m;
        int t = 60 * h + m - time;
        if (t < 0)
            t += 24 * 60;
        ans = min(ans, t);
    }
    cout << ans / 60 << " " << ans % 60<<endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
