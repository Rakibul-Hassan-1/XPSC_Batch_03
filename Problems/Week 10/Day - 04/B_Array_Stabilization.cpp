// #include <bits/stdc++.h>
// #define ll long long
// #define yes cout << "YES" << endl
// #define no cout << "NO" << endl
// #define endl '\n'
// #define TestCase() \
//     int tc;        \
//     cin >> tc;     \
//     while (tc--)
// #define fasterIO()                 \
//     ios_base ::sync_with_stdio(0); \
//     cin.tie(0);                    \
//     cout.tie(0)
// using namespace std;

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

// void solve()
// {
// }
// int main()
// {
//     fasterIO();
//     // TestCase()
//     //     solve();
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//         cin >> v[i];

//     if (n == 2)
//         cout << 0 << "\n";
//     else
//     {
//         sort(v.begin(), v.end());
//         int secondLast = v[n - 2] - v[0];
//         int first = v[n - 1] - v[1];
//         cout << min(secondLast, first) << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    if (v.size() <= 2)
        cout << 0;
    else
    {
        sort(v.begin(), v.end());
        int ans1 = v[v.size() - 2] - v[0];
        int ans2 = v[v.size() - 1] - v[1];

        cout << min(ans1, ans2) << "\n";
    }

    return 0;
}