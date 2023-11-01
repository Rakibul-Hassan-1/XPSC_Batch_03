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

// int subArray(vector<int> &arr, int k)
// {
//     int n = arr.size();
//     int count = 0;

//     for (int i = 0; i <= n - k; i++)
//     {
//         bool isOdd = false;
//         for (int j = 0; j < k; j++)
//         {
//             if (arr[i + j] % 2 != 0)
//             {
//                 isOdd = true;
//                 break;
//             }
//         }
//         if (isOdd)
//             count++;
//     }

//     return count;
// }

// void solve()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<int> arr(n);
//     for (int i = 0; i < n; ++i)
//         cin >> arr[i];

//     int result = subArray(arr, k);
//     cout << result << endl;
// }

// int main()
// {
//     fasterIO();
//     TestCase()
//         solve();

//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define ff first
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ss second
#define endl '\n'
#define TestCase() \
    int tc;        \
    cin >> tc;     \
    while (tc--)
#define fasterIO()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
using namespace std;

int subArray(vector<int> &arr, int k)
{
    int n = arr.size();
    int count = 0;
    int oddCount = 0;

    for (int i = 0; i < k; i++)
    {
        if (arr[i] % 2 != 0)
            oddCount++;
    }

    if (oddCount > 0)
        count++;

    for (int i = k; i < n; i++)
    {
        if (arr[i - k] % 2 != 0)
            oddCount--;

        if (arr[i] % 2 != 0)
            oddCount++;

        if (oddCount > 0)
            count++;
    }

    return count;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int result = subArray(arr, k);
    cout << result << endl;
}

int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
