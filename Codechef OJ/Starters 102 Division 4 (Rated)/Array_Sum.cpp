//....................................<In the name of Allah>...............................//

//.................................<Bismillahir Rahmanir Rahim>...................................//
// Author : Rakibul Hassan

#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define pii pair<int, int>
#define MOD = 1e9;
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int x = k;
    vector<int> a;
    for (int i = 1; i <= n / 2; i++)
        a.push_back(1);

    k -= (n / 2);
    for (int i = 1; i <= n / 2 - 1; i++)
    {
        k -= 2;
        a.push_back(2);
    }
    if (k & 1 or k <= 0)
        cout << "-1\n";
    else
    {
        const int need = 1e5 - 2;
        if (k > 1e5)
        {
            k -= (need + 2);
            a.push_back(need + 2);
            for (int i = 0; i < n - 1; i++)
            {
                if (k >= need)
                    a[i] += need, k -= need;
                else
                {
                    a[i] += k;
                    break;
                }
            }
        }

        else
            a.push_back(k);

        if (accumulate(a.begin(), a.end(), 0) != x)
            cout << "-1\n";
        else
        {
            for (auto c : a)
            {
                cout << c << ' ';
            }
            cout << '\n';
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
