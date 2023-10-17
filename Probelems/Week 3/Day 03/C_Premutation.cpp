#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n][n - 1];
        vector<int> v;
        map<int, bool> visited;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> a[i][j];
                if (i == 0)
                {
                    // cout << a[i][j] << " ";
                    visited[a[i][j]] = true;
                    v.push_back(a[i][j]);
                }
                // cout << endl;
            }
        }
        for (auto x : v)
            cout << x << " ";

        cout << endl;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (visited[a[i][j]] == false)
                {
                    visited[a[i][j]] = true;
                    if (j == 0)
                    {
                        v.insert(v.begin(), a[i][j]);
                    }
                    else
                    {
                        v.push_back(a[i][j]);
                        // visited[a[i][j]]=true;
                    }
                }
            }
        }
        // for (int val : v)
        // {
        //     cout << val << " ";
        // }
        // cout << endl;
    }
    return 0;
}