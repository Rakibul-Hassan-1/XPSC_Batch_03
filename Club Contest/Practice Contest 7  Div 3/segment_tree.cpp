#include <bits/stdc++.h>
using namespace std;
const int mx = 1e5 + 5;
int tree[3 * mx];

int query(int node, int l, int r, int x, int y)
{
    if (y < l || x > r)
        return 0;
    if (x <= l && y >= r)
    {
        return tree[node];
    }
    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    int mid = (l + r) / 2;

    return query(leftNode, l, mid, x, y) +
           query(rightNode, mid + 1, r, x, y);
}

void build(int node, int l, int r, vector<int> &v)
{
    // cout << node << " " << l << " " << r << endl;
    if (l == r)
    {
        tree[node] = v[l];
        return;
    }
    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    int mid = (l + r) / 2;
    build(leftNode, l, mid, v);
    build(rightNode, mid + 1, r, v);

    tree[node] = tree[leftNode] + tree[rightNode];
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    build(1, 0, n - 1, v);

    // for (int i = 1; i <= 3; i++)
    // {
    //     cout << tree[i] << " ";
    // }
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        // x--;
        // y--;
        cout << query(1, 0, n - 1, x, y) << endl;
    }

    return 0;
}