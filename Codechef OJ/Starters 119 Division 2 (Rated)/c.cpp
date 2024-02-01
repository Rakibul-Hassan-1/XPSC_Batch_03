// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// #define ll long long
// #define yes cout << "YES" << endl
// #define no cout << "NO" << endl
// #define endl '\n'
// #define fasterIO()                 \
//     ios_base ::sync_with_stdio(0); \
//     cin.tie(0);                    \
//     cout.tie(0)
// using namespace std;
// using namespace __gnu_pbds;
// template <typename tc>
// using ordered_set = tree<tc, null_type, less<tc>, rb_tree_tag, tree_order_statistics_node_update>;

// vector<int> getDivisors(int n)
// {
//     vector<int> d;
//     for (int i = 1; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             d.push_back(i);
//             if (i != (n / i))
//             {
//                 d.push_back(n / i);
//             }
//         }
//     }
//     return d;
// }

// vector<int> solve(int n, int k)
// {
//     vector<int> arr(n);
//     for (int i = 0; i < k; i++)
//         arr[i] = 2 * i + 1;
//     for (int i = k; i < 2 * k + 1 and i < n; i++)
//         arr[i] = 2 * (i - k);
//     for (int i = 2 * k + 1, odd = 2 * k + 1, even = 2 * k; i < n; i++)
//     {
//         if (i % 2 == 0)
//             arr[i] = even += 2;
//         else
//             arr[i] = odd += 2;
//     }

//     return arr;
// }
// int main()
// {
//     fasterIO();
//     int tc = 1;
//     cin >> tc;
//     while (tc--)
//     {
//         int n, k;
//         cin >> n >> k;
//         vector<int> ans = solve(n, k);
//         for (int i = 0; i < n; i++)
//             cout << ans[i] << " ";
//         cout << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            arr[i] = i + 1;
        }

        if (k < n / 2)
        {
            for (int i = 0; i <= k; i++)
            {
                arr[i] = 2 * (i + 1) - 1;
            }
        }
        else
        {

            for (int i = 0; i < n - k - 1; i++)
            {
                arr[i] = 2 * (i + 1);
            }
            for (int i = n - k - 1; i < n; i++)
            {
                arr[i] = 2 * (i - (n - k - 1)) - 1;
            }
        }

        for (int i = 0; i < n; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
