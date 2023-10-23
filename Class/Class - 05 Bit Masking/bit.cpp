#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, k;
    cin >> n >> k;
    // cout << n % k << endl;
    // using bit manipulation
    /*
        let n = 3 and k = 2;
        n % k = 1;
        n(3)  = 0011
        k-1(1)= 0001
        (&)
        -------------
            =   0001
    */
   
    cout << (n & (k - 1));

    return 0;
}