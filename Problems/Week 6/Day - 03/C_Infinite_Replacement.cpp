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
    string s, t;
    cin >> s >> t;

    if (t == "a")
    {
        cout << 1 << endl;
    }
    else if (t.find('a') != string::npos)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << (1ULL << s.length()) << endl;
    }
}

int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}