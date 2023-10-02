#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int first_press = max(a, b);

    if (first_press == a)
        a--;
    else
        b--;
    

    int second_press = max(a, b);

    cout << first_press + second_press << endl;

    return 0;
}