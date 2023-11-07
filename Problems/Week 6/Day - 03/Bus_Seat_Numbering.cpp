#include <bits/stdc++.h>
#define endl '\n'
#define TestCase() \
    int tc;        \
    cin >> tc;     \
    for (int i = 0; i < tc; i++)
#define fasterIO()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)

using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n >= 1 && n <= 10)
        cout << "Lower Double" << endl;
    else if (n == 11 || n == 12 || n == 13 || n == 14 || n == 15)
        cout << "Lower Single" << endl;
    else if (n >= 16 && n <= 25)
        cout << "Upper Double" << endl;
    else
        cout << "Upper Single" << endl;
}
int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
