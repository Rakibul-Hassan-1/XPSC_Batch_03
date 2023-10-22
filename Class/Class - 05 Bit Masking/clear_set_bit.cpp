#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int i;
    cin >> i;
    int x = 63;
    int Mask = 1 << i;
    int newMask = (x ^ Mask);
    int final = (n & newMask);
    cout << final << endl;
    
    return 0;
}