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
    ll n, i, j, count, ans, k;
    count = 0;
    ans = 0;
    cin >> n;

    vector<ll> a;
    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n; i++)
    {
        while ((a[i] % 2) == 0)
        {
            count++;
            a[i] = a[i] / 2;
        }
    }

    vector<ll> v;

    for (i = 2; i <= n; i++)
    {
        j = i;

        k = 0;

        while ((j % 2) == 0)
        {
            k++;
            j /= 2;
        }

        if (k > 0)
        {
            v.push_back(k);
        }
    }

    sort(v.begin(), v.end());

    k = v.size();

    for (i = k - 1; i >= 0 && count < n; i--)
    {
        count = count + v[i];
        ans++;
    }

    if (count < n)
        cout << "-1\n";
    else
        cout << ans << "\n";
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
