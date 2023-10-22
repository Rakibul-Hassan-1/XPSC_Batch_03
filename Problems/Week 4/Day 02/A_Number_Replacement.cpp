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
    bool flag = true;
    cin >> n;
    vector<int> a(n);
    string s;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> s;

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] == a[j] && s[i] != s[j])
                flag = false;

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
