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
    for (int i = 0; i < v.size(); i++)
        cin >> v[i];
    sort(v.begin(), v.end());

    int cnt1 = 0, cnt2 = 0;
    n = v.size();
    for (int i = 0; i < (n / 2); i++)
        cnt1 += v[i];
    for (int i = (n + 1) / 2; i < n; i++)
        cnt2 += v[i];

    cout << abs(cnt1 - cnt2) << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
