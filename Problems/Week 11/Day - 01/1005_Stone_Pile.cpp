#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ssm, sum = 0, result = INT_MAX, temp;
    cin >> n;
    vector<int> arr(n + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    // sub set ber kora hoise
    for (int mask = 0; mask < (1 << n); mask++)
    {
        ssm = 0;
        for (int i = 0; i < n; i++)
        {
            // subset gular total weight x ber korte hobe
            if (mask & (1 << i))
                ssm += arr[i];
        }
        // ans = absulate(2*x-subset er weight)
        temp = abs(2 * ssm - sum);
        if (result > temp)
            result = temp;
    }
    cout << result << endl;
    return 0;
}
