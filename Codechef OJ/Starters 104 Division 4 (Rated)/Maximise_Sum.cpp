#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        if (v.size() == 1)
        {
            cout << v[0] << "\n";
        }
        else if (v.size() == 2)
        {
            cout << (v[0] + v[1]) << "\n";
        }
        else
        {
            pair<int, int> p1 = {-1, INT_MIN};
            pair<int, int> p2 = {-1, INT_MIN};

            for (int i = 0; i < n; i++)
            {
                if (v[i] > p1.second)
                {
                    p1.first = i;
                    p1.second = v[i];
                };
            }

            for (int i = 0; i < n; i++)
            {
                if (i != p1.first && v[i] > p2.second)
                {
                    p2.first = i;
                    p2.second = v[i];
                }
            }

            int l = p1.first < p2.first ? p1.first : p2.first;
            int r = p1.first > p2.first ? p1.first : p2.first;

            for (int i = l; i < r; i++)
            {
                v[i] = min(v[l], v[r]);
            }

            long long sum = 0;
            for (int i = 0; i < n; i++)
                sum += v[i];
            cout << sum << "\n";
        }
    }
    return 0;
}