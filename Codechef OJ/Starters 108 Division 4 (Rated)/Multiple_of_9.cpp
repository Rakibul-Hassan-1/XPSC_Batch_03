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
#define fasterIO()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int si = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        if ((s[i] == '?'))
            si++;
        else
            b = b + (s[i] - '0');
    }

    if (s[0] == '?')
    {
        cout << 1;
        si--;
        while (si--)
            cout << 0;
        cout << endl;
    }
    else
    {
        if (si > 0)
        {
            b = b % 9;
            if (b == 0)
            {
                si--;
                while (si--)
                    cout << 1;
                cout << 2 << endl;
            }
            else
            {
                while (si--)
                    cout << 1;
                cout << endl;
            }
        }
        else
        {
            if (b % 9)
                cout << 0 << endl;
            else
                cout << 1 << endl;
        }
    }
}

int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
