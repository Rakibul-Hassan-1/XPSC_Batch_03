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

// void solve()
// {
//     int a, b;
//     cin >> a >> b;
//     int diff = abs(a - b);

//     if (diff == 0)
//     {
//         cout << 0 << endl;
//         return;
//     }

//     ll i = 1;
//     while (true)
//     {
//         ll sum = i * (i + 1) / 2;
//         if (sum >= diff && (sum - diff) % 2 == 0)
//         {
//             cout << i << endl;
//             return;
//         }
//         i++;
//     }
// }
void solve()
{
    int a, b;
    cin >> a >> b;
    int diff = abs(a - b);

    if (diff == 0)
    {
        cout << 0 << endl;
        return;
    }

    ll i = sqrt(2 * diff);
    while (true)
    {
        ll sum = i * (i + 1) / 2;
        if (sum >= diff && (sum - diff) % 2 == 0)
        {
            cout << i << endl;
            return;
        }
        i++;
    }
}

int main()
{
    fasterIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
