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
}
int main()
{
    fasterIO();
    int n;
    cin >> n;
    vi v;
    while (n >= 2)
    {
        v.push_back(2);
        n -= 2;
    }
    if (n > 0)
    {
        v.pop_back();
        v.push_back(3);
    }
    cout << v.size() << endl;
    for (int x : v)
        cout << x << " ";
    return 0;

    return 0;
}
