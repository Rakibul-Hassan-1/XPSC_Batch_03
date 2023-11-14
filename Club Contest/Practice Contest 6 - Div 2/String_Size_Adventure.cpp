#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    int count1 = 0, count2 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    cout << count1 + 2 * (count2) << endl;

    return 0;
}