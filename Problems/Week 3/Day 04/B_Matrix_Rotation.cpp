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
const ll mod = 1e9 + 7;
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

// roation chea
bool isBeu(int x1, int y1, int x2, int y2)
{
    return x1 < y1 && x1 < x2 && x2 < y2 && y1 < y2;
}
void solve()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    bool first = isBeu(x1, y1, x2, y2);
    bool second = isBeu(x2, x1, y2, y1);
    bool third = isBeu(y2, x2, y1, x1);
    bool fourth = isBeu(y1, y2, x1, x2);

    if (first || second || third || fourth)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
