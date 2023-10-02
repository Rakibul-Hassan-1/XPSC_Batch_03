#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int first = (s[0] - 48) + (s[1] - 48) + (s[2] - 48);
        int second = (s[3] - 48) + (s[4] - 48) + (s[5] - 48);
        if (first == second)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}