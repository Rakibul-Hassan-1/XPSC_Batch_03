#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] < 0)
            v[i] *= -1;
    }

    sort(v.begin(), v.end());

    int ans = v[0];
    if (ans < 0)
    {
        cout << ans * -1 << endl;
    }
    else
        cout << ans << endl;

    return 0;
}