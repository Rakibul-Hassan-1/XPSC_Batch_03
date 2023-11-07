#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, n;
    cin >> a >> b >> n;
    int ans = n + a;
    if (ans >= b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}