#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define all(v) (v).begin(), (v).end()
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

void solve(int t)
{
    int n;
    cin >> n;
    vector<int> v(n);
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s.insert(v[i]);
    }

    sort(all(v));
    vector<int> ans(n, 0);
    ll j = 0;

    for (int i = 1; i < n; i += 2)
    {
        ans[i] = v[j];
        j++;
    }

    for (int i = 0; i < n; i++)
    {
        if (ans[i] == 0)
        {
            ans[i] = v[j];
            j++;
        }
    }
    ll c = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (ans[i] < ans[i - 1] && ans[i] < ans[i + 1])
            c++;
    }
    cout << c << endl;
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    fasterIO();
    int t = 1;
    // TestCase()
    while (t--)
        solve(t);

    return 0;
}
