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

vector<int> maxLeaf;

int dfs(int node, int parent, vector<vector<int>> &g)
{
    int leaf_count = 0;
    for (auto child : g[node])
    {
        if (child != parent)
            leaf_count += dfs(child, node, g);
    }

    if (leaf_count == 0)
        return 1;

    maxLeaf[node] = leaf_count;
    return leaf_count;
}

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> g(n + 1);
    maxLeaf.assign(n + 1, 0);

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, -1, g);
    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans = max(ans, maxLeaf[i]);
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
