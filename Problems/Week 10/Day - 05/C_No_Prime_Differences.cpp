#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
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

vector<int> getDivisors(int n)
{
    vector<int> d;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            d.push_back(i);
            if (i != (n / i))
            {
                d.push_back(n / i);
            }
        }
    }
    return d;
}

void solve()
{

    int n, m;
    cin >> n >> m;
    vector<int> arr[n + 1];
    int value = 1;
    for (int i = 1; i <= n; i++)
    {
        arr[i].resize(m + 1);
        for (int j = 1; j <= m; j++)
        {
            arr[i][j] = value;
            value++;
        }
    }
    for (int i = 2; i <= n; i += 2)
    {
        for (int j = 1; j <= m; j++)
        {
            // arr[i][j] = value;
            // value++;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i += 2)
    {
        for (int j = 1; j <= m; j++)
        {
            // arr[i][j] = value;
            // value++;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
