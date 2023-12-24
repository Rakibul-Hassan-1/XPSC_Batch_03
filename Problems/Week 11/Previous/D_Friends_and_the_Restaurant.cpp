#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define TestCase() \
    int tc = 1;    \
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
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] -= x;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] += x;
    }
    sort(a.begin(), a.end(), greater<>());
    int ans = 0, l = 0, r = n - 1;
    while (l < r)
    {
        if (a[l] > -1 and a[r] > -1)
        {
            ans++;
            l++;
            r--;
        }
        else if (a[l] < 0 and a[r] < 0)
            break;
        else if (a[l] > -1)
            if (a[l] >= abs(a[r]))
            {
                ans++;
                l++;
                r--;
            }
            else
                r--;
    }
    cout << ans << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
