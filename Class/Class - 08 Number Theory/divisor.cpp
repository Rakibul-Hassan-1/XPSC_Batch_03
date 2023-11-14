// Naive approx for calculating Divisors of N with O(N) time complexity

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
        }
    }
    for (auto x : v)
        cout << x << " ";
    cout << endl;

    return 0;
}