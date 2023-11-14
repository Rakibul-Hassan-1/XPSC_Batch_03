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
    int a[3], b[3];

    for (int i = 0; i < 3; i++)
        cin >> a[i];
    for (int i = 0; i < 3; i++)
        cin >> b[i];

    sort(a, a + 3, greater<int>());
    sort(b, b + 3, greater<int>());

    int aliceScore = a[0] * 100 + a[1] * 10 + a[2];
    int bobScore = b[0] * 100 + b[1] * 10 + b[2];

    if (aliceScore > bobScore)
    {
        cout << "Alice" << endl;
    }
    else if (aliceScore < bobScore)
    {
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Tie" << endl;
    }
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
