#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define ff first
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
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
    int n;
    cin >> n;
    for (int i = 3; i < n; i++)
    {
        int c = (n - i) / 2;
        int b = n - i - c;
        if (c > 1 && b + 1 < i)
        {
            c--;
            b++;
        }
        if (i > b && b > c)
        {
            cout << b << ' ' << i << ' ' << c << endl;
            return;
        }
    }
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
