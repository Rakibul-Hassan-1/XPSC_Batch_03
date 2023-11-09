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
    int N, K, L;
    cin >> N >> K >> L;
    set<int> playlist;
    for (int i = 0; i < N; i++)
    {
        int minute, lang;
        cin >> minute >> lang;
        if (lang == L)
        {
            playlist.insert(minute);
        }
    }
    if (playlist.size() >= K)
    {
        int res = 0;
        auto it = playlist.rbegin();
        while (K--)
        {
            res += *it;
            ++it;
        }
        cout << res << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
