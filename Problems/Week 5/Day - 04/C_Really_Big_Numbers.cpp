#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll n, s;
bool digit(ll x)
{
    ll sum = x;
    int sd = 0;
    while (x)
    {
        sd += (x % 10);
        x /= 10;
    }
    return sum - sd >= s;
}

int main()
{

    cin >> n >> s;
    ll l = 0, r = n + 1, ans = n + 1;
    
    while (l <= r)
    {
        ll m = l + (r - l) / 2;
        if (digit(m))
        {
            ans = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    cout << n - ans + 1 << '\n';
    return 0;
}