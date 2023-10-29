#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cin >> m;
    vector<int> q(m);

    for (int i = 0; i < m; i++)
        cin >> q[i];

    for (int i = 0; i < m; i++)
    {
        int x = q[i];

        auto it_uper = upper_bound(v.begin(), v.end(), x);
        auto it_lower = lower_bound(v.begin(), v.end(), x);

        if (it_lower != v.begin())
            it_lower--;
        else
            it_lower = v.end();

        if (it_lower == v.end())
            cout << "X ";
        else
            cout << *it_lower << " ";

        if (it_uper == v.end())
            cout << "X" << endl;
        else
            cout << *it_uper << endl;
    }

    return 0;
}