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

int a[5] = {600, 60, 0, 10, 1};
int good[16] = {0, 70, 140, 210, 280, 350, 601, 671, 741, 811, 881, 951, 1202, 1272, 1342, 1412};

void solve()
{
    string s;
    cin >> s;
    int x;
    cin >> x;
    int tot = 0;
    for (int i = 0; i < 5; i++)
    {
        tot += (int)(s[i] - '0') * a[i];
    }
    set<int> t;
    for (int i = 0; i < 2022; i++)
    {
        t.insert(tot);
        tot += x;
        tot %= 1440;
    }
    int res = 0;
    for (int i : t)
    {
        for (int j = 0; j < 16; j++)
        {
            if (good[j] == i)
            {
                res++;
            }
        }
    }
    cout << res << '\n';
}
int main()
{
    fasterIO();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
