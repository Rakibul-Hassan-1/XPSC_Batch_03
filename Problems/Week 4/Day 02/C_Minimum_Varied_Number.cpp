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
    int n;
    cin >> n;
    string s;
    for (int i = 9; i >= 1; i--)
    {
        if (n >= i)
        {
            s = char('0' + i) + s;
            n -= i;
        }
    }
    cout << s << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
