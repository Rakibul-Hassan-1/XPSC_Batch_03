#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define ff first
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
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

    if (n == 2 && v[0] != v[1])
        no;
    else
    {
        ll sum = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 != 0)
                flag = true;
            sum += v[i];
        }

        if (flag)
            no;
        else if (sum % n == 0)
            yes;
        else
            no;
    }
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}