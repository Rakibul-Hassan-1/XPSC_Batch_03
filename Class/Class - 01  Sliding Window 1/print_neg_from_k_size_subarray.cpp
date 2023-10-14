// Sliding Window Optimal solution Time Complexity O(N)
/*
input:
6
1 5 1 6 1 2
3
Output: 7 12 8 9
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int k;
    cin >> k;
    int i = 0, j = 0, s = 0;
    queue<int> pq;

    while (j < n)
    {
        if (a[j] < 0)
            pq.push(a[j]);

        if (j >= k - 1)
        {
            if (pq.size())
                cout << pq.front() << " ";
            else
                cout << 0 << " ";
            if (a[j] < 0)
                pq.pop();
                
            i++;
        }
        j++;
    }

    return 0;
}