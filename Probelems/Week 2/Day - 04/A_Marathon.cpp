#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int arr[t];
    while (t--)
    {
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 1; i < 4; i++)
        {
            if (arr[i] > arr[0])
            {
                count++;
            }
        }
        cout << count << endl;
    }
}