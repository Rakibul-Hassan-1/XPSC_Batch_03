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
    string s;
    cin >> s;
    set<char> st;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        st.insert(s[i]);
        if (st.size() > 3)
        {
            ans++;
            st.clear();
            st.insert(s[i]);
        }
    }

    if (st.size() > 0)
        ans++;

    cout << ans << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
