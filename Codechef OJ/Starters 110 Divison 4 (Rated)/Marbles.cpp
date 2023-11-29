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
    int a, b;
    cin >> a >> b;
    if ((a % b) == 0)
        cout << 0 << endl;
    else
    {
        int cnt1 = 0, cnt2 = 0;
        bool frnd, chef;
        int c = a;
        int d = b;

        while (a >= b)
        {
            a--, b++, cnt1++;
            if (a % b == 0)
            {
                chef = true;
                break;
            }
        }
        a = c;
        b = d;

        frnd = false;

        while (b > 0)
        {
            a++;
            b--;
            cnt2++;
            if ((a % b) == 0)
            {
                frnd = true;
                break;
            }
        }

        if (chef && frnd)
        {
            if (cnt1 < cnt2)
                cout << cnt2 << endl;
            else
                cout << cnt1 << endl;
        }

        else
        {
            if (chef == 1)
                cout << cnt1 << endl;
            else
                cout << cnt2 << endl;
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
