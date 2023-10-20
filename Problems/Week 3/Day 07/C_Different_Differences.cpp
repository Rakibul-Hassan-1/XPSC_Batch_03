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
    cin >> k >> n;
    int j = 1, diff = 1;
    for (int i = 1; i <= k; i++)
    {
        cout << j << " ";
        if ((n - (j + diff)) >= (k - (i + 1)))
        {
            j += diff;
            diff++;
        }
        else
            j++;
    }
    cout << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
