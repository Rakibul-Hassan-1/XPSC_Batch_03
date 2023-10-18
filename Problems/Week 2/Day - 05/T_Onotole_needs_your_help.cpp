//....................................<In the name of Allah>...............................//

//.................................<Bismillahir Rahmanir Rahim>...................................//
// Author : Rakibul Hassaninclude <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums)
{
    unordered_map<int, int> countMap;
    
    for (int num : nums)
    {
        countMap[num]++;
    }
    for (const auto &pair : countMap)
    {
        if (pair.second == 1)
        {
            return pair.first;
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    vector<int> nums;
    while (t--)
    {
        int n;
        cin >> n;
        nums.push_back(n);
    }

    cout << solve(nums) << endl;

    return 0;
}
