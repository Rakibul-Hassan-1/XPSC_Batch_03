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
    int n;
    cin >> n;

    vector<vector<int>> cnt(100, vector<int>(100, 0));
    long long ans = 0;

    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        for (int j = 0; j < 2; ++j)
        {
            for (char c = 'a'; c <= 'k'; c++)
            {
                if (c == s[j])
                    continue;

                string a = s;
                a[j] = c;
                ans += cnt[a[0] - 'a'][a[1] - 'a'];
            }
        }
        cnt[s[0] - 'a'][s[1] - 'a']++;
    }
    cout << ans << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
