// //....................................<In the name of Allah>...............................//

// //.................................<Bismillahir Rahmanir Rahim>...................................//
// // Author : Rakibul Hassan

// #include <bits/stdc++.h>
// #define ll long long int
// #define ull unsigned ll
// #define vi vector<int>
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define endl '\n'
// #define gcd(aaa, aaaa) __gcd((aaa), (aaaa));
// #define lcm(aaa, aaaa) (abs((aaa) * (aaaa)) / gcd(aaa, aaaa))
// #define TestCase() \
//     int tc;        \
//     cin >> tc;     \
//     while (tc--)
// #define fasterIO()                 \
//     ios_base ::sync_with_stdio(0); \
//     cin.tie(0);                    \
//     cout.tie(0)

// using namespace std;

// int main()
// {
//     fasterIO();
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     sort(a.begin(), a.end());

//     cout << min(a[n - 2] - a[0], a[n - 1] - a[1]) << endl;

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

    if (n == 2)
        cout << 0 << "\n";
    else
    {
        sort(v.begin(), v.end());
        int secondLast = v[n - 2] - v[0];
        int first = v[n - 1] - v[1];
        cout << min(secondLast, first) << "\n";
    }

    return 0;
}