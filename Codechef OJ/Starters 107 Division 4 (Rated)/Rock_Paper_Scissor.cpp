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
    int n, count1 = 0, count2 = 0;
    cin >> n;
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'R')
        {
            if (b[i] == 'P')
            {
                count2++;
            }
            else if (b[i] == 'S')
            {
                count1++;
            }
        }
        else if (a[i] == 'P')
        {
            if (b[i] == 'R')
            {
                count1++;
            }
            else if (b[i] == 'S')
            {
                count2++;
            }
        }
        else
        {
            if (b[i] == 'R')
                count2++;
            else if (b[i] == 'P')
            {
                count1++;
            }
        }
    }

    if (count1 > count2)
        cout << 0 << endl;
    else if (count1 == count2)
        cout << 1 << endl;
    else
        cout << (count2 - count1) / 2 + 1 << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
