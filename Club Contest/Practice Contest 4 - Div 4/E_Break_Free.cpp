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
int N = 1e5 + 5;
int MOD = 1e9 + 7;
vector<ll> pow2(N);

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int cntEven = 0;

    for (auto e : a)
        cntEven += (e % 2 == 0);

    cout << (pow2[cntEven] - (cntEven == n)) << "\n";
}

int main()
{
    fasterIO();
    pow2[0] = 1;
    for (int i = 1; i < N; i++)
        (pow2[i] = 2ll * pow2[i - 1]) %= MOD;
        
    TestCase()
        solve();

    return 0;
}
