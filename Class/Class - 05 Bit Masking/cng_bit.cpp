#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int x;
    cin >> x;
    int mask = 1 << x;

    cout << (n ^ mask) << endl;

    return 0;
}