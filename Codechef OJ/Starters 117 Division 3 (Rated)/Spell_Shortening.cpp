#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define fasterIO()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

vector<int> getDivisors(int n)
{
    vector<int> d;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            d.push_back(i);
            if (i != (n / i))
            {
                d.push_back(n / i);
            }
        }
    }
    return d;
}

string sovle(string &s)
{
    int n = s.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] > s[i + 1])
        {
            return s.substr(0, i) + s.substr(i + 1);
        }
    }
    return s.substr(0, n - 1);
}
int main()
{
    fasterIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        string s;
        cin >> n >> s;
        cout << sovle(s) << endl;
    }

    return 0;
}
