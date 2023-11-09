#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k)
{
    int max_value = 0;
    int max_x = 0;
    for (int x = 0; x <= n; x++)
    {
        int value = (x % k) * ((n - x) % k);
        if (value > max_value)
        {
            max_value = value;
            max_x = x;
        }
    }
    return max_x;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        int result = solve(n, k);
        cout << result << endl;
    }
    return 0;
}
