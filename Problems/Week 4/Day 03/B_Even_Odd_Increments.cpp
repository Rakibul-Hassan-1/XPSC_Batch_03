    #include <bits/stdc++.h>
    #define ll long long
    #define vi vector<int>
    #define pb push_back
    #define endl '\n'
    #define TestCase() \
        int tc;        \
        cin >> tc;     \
        while (tc--)
    #define fasterIO()                \
        ios_base::sync_with_stdio(0); \
        cin.tie(0);                   \
        cout.tie(0)
    using namespace std;

    void solve()
    {
        int n, q;
        cin >> n >> q;
        ll sum = 0;
        ll temp, evenCount = 0, oddCount = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp % 2 == 0)
            {
                evenCount++;
                sum += temp;
            }
            else
            {
                oddCount++;
                sum += temp;
            }
        }
        while (q--)
        {
            int m, value;
            cin >> m >> value;

            if (m == 1)
            {
                sum += oddCount * value;

                if (value % 2 != 0)
                {
                    evenCount += oddCount;
                    oddCount = 0;
                }
            }
            else
            {
                sum += (evenCount * value);
                if (value % 2 != 0)
                {
                    oddCount += evenCount;
                    evenCount = 0;
                }
            }
            cout << sum << endl;
        }
    }

    int main()
    {
        fasterIO();
        TestCase()
            solve();

        

        return 0;
    }
