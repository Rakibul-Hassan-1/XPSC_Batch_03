#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    bool possible = true;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > k)
        {
            int extra = v[i] - k;
            if (i < n - 1)
            {
                v[i + 1] += extra;
            }
            else
            {
                possible = false; // If we can't redistribute the extra chocolates to the next child, it's not possible.
            }
        }
    }

    // Check if there are any extra chocolates left.
    if (sum == n && possible)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        solve();
    }

    return 0;
}
