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

string solve(int n, string s)
{
    if (n < 4)
        return "NO";

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if (s[0] != 'm')
        return "NO";

    if (s[n - 1] != 'w')
        return "NO";

    string a = "";

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'm')
        {
            if (s[i + 1] != 'm')
                a += s[i];
        }
        else if (s[i] == 'e')
        {
            if (s[i + 1] != 'e')
                a += s[i];
        }
        else if (s[i] == 'o')
        {
            if (s[i + 1] != 'o')
                a += s[i];
        }
        else if (s[i] == 'w')
        {
            if (s[i + 1] != 'w')
                a += s[i];
        }
        else
            return "NO";
    }
    if (a != "meow")
        return "NO";

    return "YES";
}

int main()
{
    fasterIO();
    TestCase()
    {
        int a;
        cin >> a;
        string s;
        cin >> s;
        cout << solve(a, s) << endl;
    }

    return 0;
}
