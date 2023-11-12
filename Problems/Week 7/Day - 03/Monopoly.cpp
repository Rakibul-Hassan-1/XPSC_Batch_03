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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int total = a + b + c + d;
    int max_ans = max(a, max(b, max(c, d)));
    if (max_ans > (total - max_ans))
        yes;
    else
        no;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
