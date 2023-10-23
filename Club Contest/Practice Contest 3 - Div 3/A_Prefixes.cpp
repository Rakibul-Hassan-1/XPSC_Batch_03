// #include <bits/stdc++.h>
// #define ll long long int
// #define vi vector<int>
// #define pb push_back
// #define ff first
// #define yes cout << "YES" << endl
// #define no cout << "NO" << endl
// #define ss second
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

// int main()
// {
//     fasterIO();
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     int res = 0;
//     for (int i = 0; i < n; i += 2)
//     {
//         int a = 0, b = 0;
//         if (s[i] == 'a')
//             a++;
//         if (s[i] == 'b')
//             b++;
//         if (s[i + 1] == 'a')
//             a++;
//         if (s[i + 1] == 'b')
//             b++;
//         if (a > b)
//         {
//             s[i] = 'b';
//             res++;
//         }
//         else if (a < b)
//         {
//             s[i] = 'a';
//             res++;
//         }
//     }
//     cout << res << endl;
//     cout << s << endl;

//     return 0;
// }
