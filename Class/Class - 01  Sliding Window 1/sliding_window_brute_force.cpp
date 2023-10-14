// Sliding Window brute force solution Time Complexity O(N*K)
/*
input:
6
1 5 1 6 1 2
3
Output: 7 12 8 9
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    // vector<int> ans;
    for (int i = 0; i < n - k + 1; i++)
    {
        int s = 0;
        for (int j = i; j < i + k; j++)
        {
            // cout << j << " ";
            s += arr[j];
            // ans.push_back(s);
        }
        cout << s << " ";
    }
    // sort(ans.begin(), ans.end());
    // cout << ans.back() << endl;

    return 0;
}