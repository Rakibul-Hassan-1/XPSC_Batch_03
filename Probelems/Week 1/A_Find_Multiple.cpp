#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    int ans = 2 * c;
    int range = b - a;
    if (range >= ans)
        cout << ans << endl;
    else
        cout << "-1" << endl;

    return 0;
}