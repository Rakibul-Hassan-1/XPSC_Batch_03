#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n;
    vector<int> nums(n);
    vector<int> prefix_sum(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        prefix_sum[i + 1] = prefix_sum[i] + nums[i];
    }

    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << prefix_sum[r + 1] - prefix_sum[l] << endl;
    }

    return 0;
}