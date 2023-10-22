#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define ff first
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
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bool flag = false;

    for (int i = 0; i < (1 << n); i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            int mask = 1 << j;
            if ((i & mask) == 0)
                sum -= a[j];
            else
                sum += a[j];
        }
        if (sum == 0 || sum % 360 == 0)
        {
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
