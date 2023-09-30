#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    int ans1 = pow(a, 2);
    int ans2 = pow(b, 2);
    int ans3 = pow(c, 2);

    if (ans1 + ans2 < ans3)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}