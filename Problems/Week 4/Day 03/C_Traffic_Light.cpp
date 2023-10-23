#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
#define ff first
#define ss second
#define endl '\n'
#define TestCase() \
    int tc;        \
    cin >> tc;     \
    while (tc--)
#define fasterIO()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
using namespace std;

void solve()
{
    int n;
    char c;
    cin >> n >> c;

    string s;
    cin >> s;

    s += s;
    vector<int> v;

    int count = 0;
    if (c == 'g')
    {
        cout << 0 << endl;
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            count = 0;
            if (s[i] == c)
            {
                while (i < s.size() && s[i] != 'g')
                {
                    count++;
                    i++;

                    if (i == s.size() - 1)
                    {
                        count = 0;
                    }
                }

                if (count != 0)
                    v.push_back(count);
            }
        }

        sort(v.begin(), v.end(), greater<int>());
        cout << v[0] << endl;
    }
}

int main()
{
    fasterIO();
    TestCase()
        solve();

    return 0;
}
