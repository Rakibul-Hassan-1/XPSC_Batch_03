//....................................<In the name of Allah>...............................//

//.................................<Bismillahir Rahmanir Rahim>...................................//
// Author : Rakibul Hassan

#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned ll
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl '\n'
#define gcd(aaa, aaaa) __gcd((aaa), (aaaa));
#define lcm(aaa, aaaa) (abs((aaa) * (aaaa)) / gcd(aaa, aaaa))
#define TestCase() \
    int tc;        \
    cin >> tc;     \
    while (tc--)
#define fasterIO()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)

using namespace std;

void solve()
{
}
int main()
{
    fasterIO();
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max_gcd = 0;
    int ans = 2;
    for (int k = 2; k <= 1000; k++)
    {
        int gcd = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % k == 0)
            {
                gcd++;
            }
        }

        if (gcd > max_gcd)
        {
            max_gcd = gcd;
            ans = k;
        }
    }
    cout << ans << endl;
    return 0;
}
