#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define fasterIO()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

vector<int> getDivisors(int n)
{
    vector<int> d;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            d.push_back(i);
            if (i != (n / i))
            {
                d.push_back(n / i);
            }
        }
    }
    return d;
}
void solve(int N, int K)
{
    for (int gcd = N; gcd >= 1; gcd--)
    {
        int count = 0;
        // Count multiples of gcd
        for (int j = gcd; j <= N; j += gcd)
        {
            count++;
            if (count == K)
            {
                // Output K multiples of gcd
                for (int k = gcd; k <= j; k += gcd)
                {
                    cout << k << " ";
                }
                cout << endl;
                return;
            }
        }
    }
}

int main()
{
    fasterIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int N, K;
        cin >> N >> K;
        solve(N, K);
    }

    return 0;
}
