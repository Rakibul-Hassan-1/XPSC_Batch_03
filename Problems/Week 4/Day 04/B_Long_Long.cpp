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

    ll sum = 0, cnt = 0;
    bool negSegment = false;

    for (int i = 0; i <= n; i++)
    {
        if (i < n)
            sum += abs(v[i]);

        if (negSegment)
        {
            if (i == n || v[i] > 0)
            {
                cnt++;
                negSegment = false;
            }
        }
        else
        {
            if (v[i] < 0)
                negSegment = true;
        }
    }
    cout << sum << " " << cnt << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
