#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int ans1 = x + (a);
    int ans2 = y + (b);
    if (ans1 > ans2)
        cout << "Dominater" << endl;
    else
        cout << "Everule" << endl;

    return 0;
}