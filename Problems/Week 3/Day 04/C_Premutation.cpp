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
#define vvi vector<vi>
#define endl '\n'
const ll mod = 1e9 + 7;
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
    int n;
    cin >> n;
    vvi a(n, vi(n - 1));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cin >> a[i][j];
        }
    }

    vvi mrr(n + 1, vi(n - 1));

    for (int i = 0; i < n; i++)
    {
        vi fr(n + 1, 0);
        int mi;
        for (int j = 0; j < n - 1; j++)
        {
            fr[a[i][j]] = 1;
        }
        for (int k = 1; k <= n; k++)
        {
            if (fr[k] != 1)
            {
                mi = k;
                break;
            }
        }
        mrr[mi] = a[i];
    }

    vi xrr = mrr[1];
    int i = 0;
    while (i < n - 1)
    {
        vi yrr = mrr[xrr[i]];

        if (i + 1 == n - 1)
        {
            for (int x : yrr)
                cout << x << " ";
                
            cout << xrr[i];
            break;
        }

        if (yrr[0] == xrr[i + 1])
        {
            cout << xrr[i] << " ";
            for (int x : yrr)
                cout << x << " ";
            break;
        }

        i++;
    }
    cout << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
