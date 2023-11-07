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
    int ind = 1;
    string s;
    cin >> s;
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (i == j)
                continue;
                
            if (i == s[0] - 'a' && j == s[1] - 'a')
            {
                cout << ind << endl;
                return;
            }
            ind++;
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
