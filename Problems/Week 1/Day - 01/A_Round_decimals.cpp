#include <bits/stdc++.h>
using namespace std;
int main()
{

    double n;
    cin >> n;
    int ans = n * 10;
    // cout << ans << " ";

    if (ans % 10 < 5)
        cout << floor(n) << endl;

    else
        cout << ceil(n) << endl;

    return 0;
}