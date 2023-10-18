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
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        x = x ^ a;
    }
    
    if (n % 2 == 0)
    {
        if (x == 0)
            cout << 0 << endl;
        else
            cout << -1 << endl;
    }
    else
        cout << x << endl;
}

int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
