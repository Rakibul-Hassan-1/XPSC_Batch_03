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
    int n, m, k;
    cin >> n >> m >> k;
    std::vector<int> v1(n), v2(n), v3(n);

    for (int i = 0; i < n; i++)
        cin >> v2[i] >> v3[i];

    bool flag = false;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (k == v3[i])
        {
            v1.push_back(v2[i]);
            flag = true;
            count++;
        }
    }
    if (!flag || (m > count))
    {
        cout << -1 << endl;
        return;
    }
    sort(v1.begin(), v1.end(), greater<int>());
    int sum = 0;

    for (int i = 0; i < m; i++)
        sum += v1[i];

    cout << sum << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
