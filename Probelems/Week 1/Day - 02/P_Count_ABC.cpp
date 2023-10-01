#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            if (s[i + 1] == 'B')
            {
                if (s[i + 2] == 'C')
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;

    return 0;
}