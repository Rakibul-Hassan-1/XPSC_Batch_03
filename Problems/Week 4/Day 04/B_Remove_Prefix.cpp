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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    bool flag = false;
    set<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        if (st.count(v[i]) > 0)
        {
            cout << i + 1 << endl;
            flag = true;
            break;
        }
        st.insert(v[i]);
    }
    if (!flag)
    {
        cout << 0 << endl;
    }
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
