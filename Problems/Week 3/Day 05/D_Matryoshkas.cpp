//....................................<In the name of Allah>...............................//

//.................................<Bismillahir Rahmanir Rahim>...................................//
// Author : Rakibul Hassan

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
    int n, x, count = 0;
    cin >> n;
    map<ll, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        m[x]++;
    }

    vi a;
    for (auto i : m)
        a.pb(i.first);

    sort(a.begin(), a.end());

    n = a.size();

    for (int i = 0; i < n; i++)
    {
        while (m[a[i]] > 0)
        {
            x = a[i];
            while (m[x] > 0)
            {
                m[x++]--;
            }
            count++;
        }
    }
    cout << count << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
