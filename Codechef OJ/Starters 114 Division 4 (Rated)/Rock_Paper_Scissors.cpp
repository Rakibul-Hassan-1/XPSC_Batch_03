#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
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
    ll n, count = 0;
    cin >> n;
    ll mid = (n / 2);
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    string ans = "";
    int j = 0;
    for (int i = 0; i <= mid; i++)
    {
        if (s[i] == 'P')
            ans += 'S';
        else if (s[i] == 'R')
            ans += 'P';
        else
            ans += 'R';
    }
    for (int i = mid + 1; i < n; i++)
    {
        if (s[i] == 'R')
            count++;
        ans += 'P';
        j++;
    }
    reverse(ans.begin(), ans.end());

    for (int i = j; i < n; i++)
    {
        if (count && ans[i] != 'P')
        {
            ans[i] = 'P';
            count--;
        }
    }
    cout << ans << endl;
}
int main()
{
    fasterIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
