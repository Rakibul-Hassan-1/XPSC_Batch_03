#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int need = 4 - s.size();
    // cout << need;

    reverse(s.begin(), s.end());
    while (need--)
    {
        s.push_back('0');
    }
    reverse(s.begin(), s.end());
    cout << s;

    return 0;
}