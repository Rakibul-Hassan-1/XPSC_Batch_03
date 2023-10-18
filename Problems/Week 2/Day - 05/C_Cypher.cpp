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
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        if (b == 0)
            continue;

        string now;
        cin >> now;
        for (int j = 0; j < b; j++)
        {
            if (now[j] == 'U')
                a[i]--;

            else if (now[j] == 'D')
                a[i]++;

            if (a[i] < 0)
                a[i] += 10;

            if (a[i] > 9)
                a[i] -= 10;
        }
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}
int main()
{
    fasterIO();
    TestCase()
    {
        solve();
    }

    return 0;
}
