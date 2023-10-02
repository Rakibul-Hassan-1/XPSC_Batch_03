#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;

    for (int i = 0; i <= c / a; i++)
    {
        for (int j = 0; j <= c / b; j++)
        {
            if (i * a + j * b == c)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            break;
        }
    }

    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}