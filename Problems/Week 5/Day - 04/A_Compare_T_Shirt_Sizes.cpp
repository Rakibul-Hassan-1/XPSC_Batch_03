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
    string a, b;
    cin >> a >> b;
    char a_last = a.back();
    char b_last = b.back();

    if (a_last == b_last)
    {
        if (a.size() == b.size())
        {
            cout << "=";
        }
        else if (a_last == 'S')
        {
            if (a.size() < b.size())
            {
                cout << ">";
            }
            else
            {
                cout << "<";
            }
        }
        else
        {
            if (a.size() < b.size())
            {
                cout << "<";
            }
            else
            {
                cout << ">";
            }
        }
    }
    else
    {
        if (a_last < b_last)
        {
            cout << ">";
        }
        else
        {
            cout << "<";
        }
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