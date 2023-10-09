//....................................<In the name of Allah>...............................//

//.................................<Bismillahir Rahmanir Rahim>...................................//
// Author : Rakibul Hassan

#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define pii pair<int, int>
#define MOD = 1e9;
using namespace std;
bool is_prime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool is_almost_prime(int n)
{
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0 && is_prime(i))
        {
            count++;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    return count == 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (is_almost_prime(i))
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
