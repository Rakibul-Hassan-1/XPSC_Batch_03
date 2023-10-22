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

bool compare(string &s1, string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    fasterIO();
    ll n;
    ll flag;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];

    // using custom compare function
    sort(s, s + n, compare);

    for (int i = 0; i < n - 1; i++)
    {
        bool isfound = s[i + 1].find(s[i]) != string::npos;

        if (isfound)
            flag = 1;

        else
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
            cout << s[i] << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}
