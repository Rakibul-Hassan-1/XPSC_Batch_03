#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            mp[i]++;
            n /= i;
        }
    }

    if (n > 1)
        mp[n]++;

    for (auto value : mp)
        cout << value.first << " -> " << value.second << endl;

    return 0;
}