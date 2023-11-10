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
    char s[n];
    int count = 0;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    while (1)
    {
        bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                flag = true;
                n -= 2;
                for (int j = i; j < n; j++)
                    s[j] = s[j + 2];
                count++;
                break;
            }
        }
        if (!flag)
        {
            if (count % 2 != 0)
                cout << "Zlatan\n";
            else
                cout << "Ramos\n";
            break;
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
