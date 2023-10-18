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

bool isPalindrome(string s)
{
    string t = s;
    reverse(t.begin(), t.end());
    return t == s;
}

void solve()
{
    string s, a, b;
    cin >> s;
    int x;
    cin >> x;
    a.push_back(s[0]);
    a.push_back(s[1]);
    b.push_back(s[3]);
    b.push_back(s[4]);
    int hours = stoi(a), minutes = stoi(b), currHours = stoi(a), currMinutes = stoi(b), addHours = x / 60, addMinutes = x % 60, ans = 0;

    currHours += addHours;
    currMinutes += addMinutes;
    currHours %= 24;
    currHours += (currMinutes / 60);
    currHours %= 24;
    currMinutes %= 60;

    while (1)
    {
        string x = (currHours <= 9 ? "0" : "") + to_string(currHours), y = (currMinutes <= 9 ? "0" : "") + to_string(currMinutes);

        string T = x + y;
        bool ok = isPalindrome(T);

        if (ok)
            ans++;
            
        currHours += addHours;
        currMinutes += addMinutes;
        currHours %= 24;
        currHours += (currMinutes / 60);
        currHours %= 24;
        currMinutes %= 60;
        if (a == x && b == y)
            break;
    }
    cout << ans << endl;
}

int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
