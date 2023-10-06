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
    string s1;
    cin >> s1;
    int x = 0;
    sort(s1.begin(), s1.end());
    for (int i = 1; i < s1.size(); i++)
    {
        if (s1[i] != s1[i - 1])
            x++;
    }
    if (x % 2 == 0)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
}
