//....................................<In the name of Allah>...............................//

//.................................<Bismillahir Rahmanir Rahim>...................................//
// Author : Rakibul Hassan

#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned ll
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl '\n'
#define gcd(aaa, aaaa) __gcd((aaa), (aaaa));
#define lcm(aaa, aaaa) (abs((aaa) * (aaaa)) / gcd(aaa, aaaa))
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
}
int main()
{
    fasterIO();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }

    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    ll k = 0;

    sort(v.rbegin(), v.rend());

    // for (auto x : v)
    //     cout << x << " ";
    // cout << endl;

    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] == v[i] || v[0] % v[i] != 0)
        {
            k = v[i];
            break;
        }
    }
    cout << v[0] << " " << k << endl;

    return 0;
}
