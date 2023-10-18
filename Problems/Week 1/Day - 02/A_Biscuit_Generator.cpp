#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    int times = (t + 0.5) / a;

    cout << times * b << endl;

    return 0;
}