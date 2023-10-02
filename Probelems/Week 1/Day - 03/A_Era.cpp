#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            ans = max(ans, x - i);
        }
        cout << ans << '\n';
    }
    return 0;
}