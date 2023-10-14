#include <bits/stdc++.h>
using namespace std;
int n, m;
int solve(int x, int y)
{
    if ((x == 1 || x == n) && (y == 1 || y == m))
        return 2;
    if (x == 1 || x == n || y == 1 || y == m)
        return 3;
    return 4;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2;
        cin >> n >> m >> x1 >> y1 >> x2 >> y2;
        cout << min(solve(x1, y1), solve(x2, y2)) << endl;
    }
    return 0;
}