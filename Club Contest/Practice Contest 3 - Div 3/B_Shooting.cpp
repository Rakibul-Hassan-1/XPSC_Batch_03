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

int main()
{
    fasterIO();

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> v;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int pos = -1;

        for (int j = 0; j < n; j++)
        {
            if (pos == -1 || a[j] > a[pos])
            {
                pos = j;
            }
        }
        v.push_back(pos + 1);
        ans += i * a[pos] + 1;
        a[pos] = 0;
    }

    cout << ans << endl;
    for (auto x : v)
        cout << x << " ";
        
    cout << endl;

    return 0;
}
