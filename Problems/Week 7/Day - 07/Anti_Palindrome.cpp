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

void solve()
{
    int n, temp = 0;
    cin >> n;
    string s;
    cin >> s;
    int fre[26] = {0};
    for (char c : s)
        fre[c - 'a']++;
    for (int i = 0; i < 26; i++)
    {
        if (fre[i] > 0)
            temp++;
    }
    int palindrome = 0;
    if (s.length() % 2 == 0)
    {
        bool p = true;
        for (int i = 0; i < 26; i++)
        {
            if (fre[i] % 2 != 0)
                p = false;
        }
        if (p)
            palindrome++;
    }
    else
    {
        int odd = 0;
        for (int i = 0; i < 26; i++)
        {
            if (fre[i] % 2 != 0)
                odd++;
        }
        if (odd == 1)
            palindrome++;
    }

    if (temp == 1)
    {
        if (s.length() % 2 == 0)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    else if (palindrome == 1)
        cout << 1 << endl;
    else if (palindrome == 0)
        cout << 0 << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
