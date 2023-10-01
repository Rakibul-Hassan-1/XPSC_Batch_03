#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<bool> vis(26, false);

    for (char c : s)
    {
        vis[c - 'a'] = true;
    }

    for (int i = 0; i < 26; i++)
    {
        if (!vis[i])
        {
            cout << char(i + 'a') << endl;
            return 0;
        }
    }

    cout << "None" << endl;
    return 0;

    return 0;
}