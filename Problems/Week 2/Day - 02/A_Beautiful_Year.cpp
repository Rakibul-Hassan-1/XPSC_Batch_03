#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    n++;
    while (1)
    {
        string s = to_string(n);
        set<int> st;
        for (int i = 0; i < 4; i++)
        {
            st.insert(s[i]);
        }
        if (st.size() == 4)
            break;
        n++;
    }
    cout << n;
    return 0;
}
