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
    int n, count1 = 0, count2 = 0, maxc1 = -1, maxc2 = -1;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i])
        {
            count1++;
            maxc1 = max(maxc1, count1);
        }
        else
            count1 = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i])
        {
            count2++;
            maxc2 = max(maxc2, count2);
        }
        else
            count2 = 0;
    }

    if (maxc1 > maxc2)
        cout << "Om" << endl;
    else if (maxc1 < maxc2)
        cout << "Addy" << endl;
    else
        cout << "Draw" << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
