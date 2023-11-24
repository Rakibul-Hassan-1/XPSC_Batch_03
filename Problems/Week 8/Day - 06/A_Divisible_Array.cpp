#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0, i;
        cin >> n;
        if (n == 1)
            cout << "1" << endl;
        else if (n == 2)
            cout << "2 4" << endl;
        else
        {
            int sum = ((n * (n + 1)) / 2) - 1;

            for (i = 0; i != (sum % n == 0); i++)
            {
                sum++;
            }
            cout << i << " ";
            for (int i = 2; i <= n; i++)
                cout << i << " ";

            cout << endl;
        }
    }

    return 0;
}
