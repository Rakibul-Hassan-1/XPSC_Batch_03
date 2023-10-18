//....................................<In the name of Allah>...............................//

//.................................<Bismillahir Rahmanir Rahim>...................................//
// Author : Rakibul Hassan

#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define ff first
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

int dx[4] = {-1, 1, -1, 1};
int dy[4] = {-1, 1, 1, -1};

bool vaild(int dxx, int dyy, int n, int m, int k)
{
    return (dxx <= n && dyy <= m && dxx >= 1 && dyy >= 1);
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int grid[n + 1][m + 1];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> grid[i][j];

    int ans = -1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int sum = 0;
            sum += grid[i][j];

            for (int k = 0; k <= 3; k++)
            {
                int dxx, dyy;
                dxx = dx[k] + i;
                dyy = dy[k] + j;

                while (vaild(dxx, dyy, n, m, k))
                {
                    sum += grid[dxx][dyy];
                    dxx += dx[k];
                    dyy += dy[k];
                }
                ans = max(ans, sum);
            }
        }
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
