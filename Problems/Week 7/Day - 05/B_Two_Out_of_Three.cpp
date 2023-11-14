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
    int a[n];
    int fr[1000] = {0};
    int cnt = 0;
    set<int> st;
    int pos[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        fr[a[i]]++;
        if (fr[a[i]] > 1)
            st.insert(a[i]);
        pos[a[i]] = i;
    }
    if (st.size() < 2)
    {
        cout << -1 << endl;
        return;
    }
    int cc = 2;
    for (int i = 0; i < n; i++)
    {
        if (st.count(a[i]))
        {
            cout << cc << " ";
            cc++;
            if (cc == 4)
                cc = 2;
            st.erase(a[i]);
        }
        else
            cout << 1 << " ";
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