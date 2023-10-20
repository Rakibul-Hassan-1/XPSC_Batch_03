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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> upper(26, 0), lower(26, 0);

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            upper[s[i] - 'A']++;
        else
            lower[s[i] - 'a']++;
    }

    int res = 0;
    
    for (int i = 0; i < 26; i++)
    {
        int pairs = min(lower[i], upper[i]);
        res += pairs;
        lower[i] -= pairs;
        upper[i] -= pairs;
        int add = min(k, max(lower[i], upper[i]) / 2);
        k -= add;
        res += add;
    }

    cout << res << "\n";
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
