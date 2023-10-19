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
    int n, s;
    cin >> n >> s;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }

    int sum = 0;
    int cnt = 0;

    for (int i = 1; i <= s; i++)
    {
        if (sum >= s)
        {
            break;
        }
        sum += i;
        cnt = i;
    }

    sort(a.begin(), a.end());
    int max = a[n - 1];

    if (sum != s || max > cnt || cnt <= n)
        cout << "NO" << endl;

    else
        cout << "YES" << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
