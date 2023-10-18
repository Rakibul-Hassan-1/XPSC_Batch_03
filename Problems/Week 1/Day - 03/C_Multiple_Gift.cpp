#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x, y;
    cin >> x >> y;

    int count = 0;
    while (x <= y)
    {
        x *= 2;
        count++;
    }

    cout << count << "\n";
    return 0;

    return 0;
}