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
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);
    for (int i = 0; i < v.size(); i++)
        cin >> v[i];

    vector<ll> ans;
    while (q--)
    {
        ll sum = 0;
        ll m, value;
        cin >> m >> value;
        for (int i = 0; i < n; i++)
        {
            if (m == 0)
            {
                if (v[i] % 2 == 0)
                {
                    v[i] = v[i] + value;
                }
            }
            else
            {
                if (v[i] % 2 != 0)
                {
                    v[i] += value;
                }
            }
            sum += v[i];
        }
        cout << sum << endl;
    }


}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
