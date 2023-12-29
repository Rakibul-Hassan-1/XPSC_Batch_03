#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'
#define fasterIO()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
using namespace std;

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

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    // index wise store kore rakha hoise
    deque<int> subseq;
    for (int i = 0; i < n; i++)
    {
        while (subseq.size() && s[subseq.back()] < s[i])
        {
            subseq.pop_back();
        }
        subseq.push_back(i);
    }
    string t = s;
    sort(t.begin(), t.end());
    for (int i = 0; i < n; i++)
    {
        if (!binary_search(subseq.begin(), subseq.end(), i) && t[i] != s[i])
        {
            cout << "-1" << endl;
            return;
        }
    }
    int ans = 0;

    deque<char> canShift;
    for (int i : subseq)
        canShift.push_back(t[i]);

    while (!subseq.empty())
    {
        if (s[subseq[0]] == canShift[0])
        {
            subseq.pop_front();
            canShift.pop_front();
            continue;
        }
        if (s[subseq.back()] == canShift[0])
        {
            subseq.pop_back();
            canShift.pop_front();
            ans++;
            continue;
        }
        ans = -1;
        break;
    }
    cout << ans << endl;
}
int main()
{
    fasterIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
