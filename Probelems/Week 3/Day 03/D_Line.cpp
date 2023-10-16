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
    string s;
    cin >> s;
    long long tot = 0;
    vector<long long> v;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            v.push_back((n - 1 - i) - i);
            tot += i;
        }
        else
        {
            v.push_back(i - (n - 1 - i));
            tot += n - 1 - i;
        }
    }
    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0)
        {
            tot += v[i];
        }
        cout << tot << ' ';
    }
    cout << '\n';
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
