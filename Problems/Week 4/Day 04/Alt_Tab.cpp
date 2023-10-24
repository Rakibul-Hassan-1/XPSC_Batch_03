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
    vector<string> s(n);
    vector<string> ans;

    for (int i = 0; i < n; i++)
        cin >> s[i];

    set<string> st;

    for (int i = n - 1; i >= 0; i--)
    {
        int len = s[i].length();
        string suffix = s[i].substr(len - 2, 2);

        if (st.find(s[i]) == st.end())
        {
            ans.push_back(suffix);
            st.insert(s[i]);
        }
    }
    for (auto it : ans)
        cout << it;
}
int main()
{
    fasterIO();
    solve();

    return 0;
}
