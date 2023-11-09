#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, x, ans;
    cin >> n >> h;
    ans = n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ans += (x > h);
    }
    cout << ans << endl;
    return 0;

    return 0;
}