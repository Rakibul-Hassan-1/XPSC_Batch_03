#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, i = 0;

    for (;;)
    {
        cin >> n >> q;
        if (!(n || q))
            break;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        cout << "CASE# " << ++i << ":\n";
        while (q--)
        {
            int query;
            cin >> query;

            int l = 0, r = n - 1;
            int pos = -1;

            while (l <= r)
            {
                int mid = l + (r - l) / 2;
                if (v[mid] == query)
                {
                    pos = mid + 1;
                    break;
                }
                else if (v[mid] < query)
                    l = mid + 1;

                else
                    r = mid - 1;
            }

            if (pos != -1)
                cout << query << " found at " << pos << '\n';

            else
                cout << query << " not found\n";
        }
    }

    return 0;
}
