// https://codeforces.com/problemset/problem/102/B
//....................................<In the name of Allah>...............................//

//.................................<Bismillahir Rahmanir Rahim>...................................//
// Author : Rakibul Hassan

#include <bits/stdc++.h>
#define ll long long
#define nl endl
#define pii pair<int, int>
#define MOD = 1e9;
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    ll count = 0;

    while (s.size() > 1)
    {
        string tmp = "";
        ll sum = 0;

        for (char c : s)
        {
            sum += (c - '0');
        }
        while (sum > 0)
        {
            char c = (sum % 10) + '0';
            tmp = c + tmp;
            sum /= 10;
        }

        s = tmp;
        count++;
    }
    cout << count << endl;
}
