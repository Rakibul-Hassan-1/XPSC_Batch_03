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

void solve()
{
}
int main()
{
    fasterIO();
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> count;
    string mx = s.substr(0, 2);

    for (int i = 0; i < n - 1; i++)
    {
        string gram = s.substr(i, 2);
        count[gram]++;
        if (count[gram] > count[mx])
        {
            mx = gram;
        }
    }

    cout << mx << endl;

    return 0;
}