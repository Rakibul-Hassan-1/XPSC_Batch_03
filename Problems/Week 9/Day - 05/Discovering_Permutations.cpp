#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    string all = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int t = 1; t <= test_case; t++)
    {
        int N, K;
        cin >> N >> K;
        string x, check;
        x = all.substr(0, N);
        check = x;
        cout << "Case " << t << ":" << '\n';
        for (int i = 1; i <= K; i++)
        {
            cout << x << '\n';
            next_permutation(x.begin(), x.end());
            if (x == check)
                break;
        }
    }

    return 0;
}