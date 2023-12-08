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
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    map<int, vector<int>> indx;

    for (int i = 1; i <= n; i++)
        indx[a[i]].push_back(i);

    bool imp = false;
    for (int i = 1; i <= n; i++)
    {
        // jodi permutation er same value 2 barer besi thake tahole kokhono possible na
        if (indx[a[i]].size() > 2)
        {
            imp = true;
            break;
        }
    }
    if (imp)
    {
        cout << "NO" << endl;
        return;
    }

    vector<int> p(n + 1, -1), q(n + 1, -1);
    multiset<int> remP, remQ;
    for (int i = 1; i <= n; i++)
    {
        remP.insert(i);
        remQ.insert(i);
    }

    for (int i = 1; i <= n; i++)
    {
        if (indx[i].empty())
            continue;
        if (indx[i].size() == 1)
        {
            p[indx[i][0]] = i;
            remP.erase(remP.find(i));
        }
        else if (indx[i].size() == 2)
        {
            p[indx[i][0]] = i;
            remP.erase(remP.find(i));
            q[indx[i][1]] = i;
            remQ.erase(remQ.find(i));
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (p[i] == -1 and q[i] == -1)
        {
            auto px = remP.end();
            px--;
            p[i] = *px;
            remP.erase(px);
            auto qx = remQ.end();
            qx--;
            q[i] = *qx;
            remQ.erase(qx);
        }
        else if (p[i] == -1)
        {
            if (remP.empty())
            {
                imp = true;
                break;
            }
            auto x = remP.upper_bound(q[i]);
            if (x == remP.begin())
            {
                imp = true;
                break;
            }
            x--;
            p[i] = *x;
            remP.erase(x);
        }
        else if (q[i] == -1)
        {
            if (remQ.empty())
            {
                imp = true;
                break;
            }
            auto x = remQ.upper_bound(p[i]);
            if (x == remQ.begin())
            {
                imp = true;
                break;
            }
            x--;
            q[i] = *x;
            remQ.erase(x);
        }
    }

    if (imp)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << q[i] << " ";
    }
    cout << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();
    return 0;
}
