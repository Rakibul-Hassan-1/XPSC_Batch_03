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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int one = 0, zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            one++;
            if (i == n - 1)
            {
                if (zero > 0)
                    cout << "NO" << endl;
                else
                    cout << "YES" << endl;
            }
            else
            {
                if (zero > 0)
                    cout << "NO" << endl;
                else
                    cout << "IDK" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
            zero++;
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
