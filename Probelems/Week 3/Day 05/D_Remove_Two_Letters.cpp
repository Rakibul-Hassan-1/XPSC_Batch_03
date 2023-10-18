//....................................<In the name of Allah>...............................//

//.................................<Bismillahir Rahmanir Rahim>...................................//
// Author : Rakibul Hassan

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
    string s;
    cin >> n >> s;
    vector<string> input;
    string sx = "";
    sx += s[0];
    sx += s[1];
    input.push_back(sx);

    for (int i = 1; i < n - 1; i++)
    {
        string ans = "";
        ans += s[i];
        ans += s[i + 1];
        string s = ans;

        reverse(s.begin(), s.end());
        
        string cs = input[input.size() - 1];

        if (!(s == cs || ans == cs))
            input.push_back(ans);
    }

    cout << input.size() << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
