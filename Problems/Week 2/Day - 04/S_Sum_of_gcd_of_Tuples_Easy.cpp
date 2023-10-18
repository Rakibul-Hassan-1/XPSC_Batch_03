//....................................<In the name of Allah>...............................//

//.................................<Bismillahir Rahmanir Rahim>...................................//
// Author : Rakibul Hassan

#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define pii pair<int, int>
#define MOD = 1e9;
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int gcd(int a, int b, int c)
{
    return gcd(gcd(a, b), c);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k;
    cin >> k;
    int sum = 0;

    for (int a = 1; a <= k; ++a)
    {
        for (int b = 1; b <= k; ++b)
        {
            for (int c = 1; c <= k; ++c)
            {
                sum += gcd(a, b, c);
            }
        }
    }

    cout << sum << endl;

    return 0;
}
