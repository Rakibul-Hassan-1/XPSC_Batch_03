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
    int n, s, r;
    cin >> n >> s >> r;
    int ct = s - r;
    int x = r / (n - 1), xr = r % (n - 1);
    vector<int> a(n - 1, x);

    int i = 0;
    while (xr > 0)
    {
        a[i]++;
        i++;
        xr--;
    }

    a.push_back(ct);

    for (auto x : a)
        cout << x << " ";

    cout << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
