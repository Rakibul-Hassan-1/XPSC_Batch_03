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
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int res = abs(arr[1] - arr[0]);
    
    for (int i = 1; i < n - 2; i++)
        res = min(res, max(abs(arr[i + 1] - arr[i]), abs(arr[i] - arr[i - 1])));

    if (n > 2)
        res = min(res, abs(arr[n - 1] - arr[n - 2]));

    cout << res << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
