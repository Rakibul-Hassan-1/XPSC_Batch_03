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

        vector<vector<string>> words(3, vector<string>(n));
        map<string, int> word_count;
        vector<int> points(3, 0);

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> words[i][j];
                word_count[words[i][j]]++;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (word_count[words[i][j]] == 1)
                {
                    points[i] += 3;
                }
                else if (word_count[words[i][j]] == 2)
                {
                    points[i] += 1;
                }
            }
        }

        cout << points[0] << " " << points[1] << " " << points[2] << endl;
    }

    return 0;
}
