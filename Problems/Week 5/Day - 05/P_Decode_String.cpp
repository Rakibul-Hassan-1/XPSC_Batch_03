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
    string s;
    cin >> s;

    int i = n - 1;
    string ans = "";
    while (i >= 0)
    {
        if (i - 2 >= 0 && s[i] == '0')
        {
            int x = s[i - 2] - '0';
            x *= 10;
            x += (s[i - 1] - '0');
            x--;
            ans.pb('a' + x);
            i = i - 3;
        }
        else
        {
            int x = s[i] - '0';
            x--;
            ans.pb('a' + x);
            i--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
