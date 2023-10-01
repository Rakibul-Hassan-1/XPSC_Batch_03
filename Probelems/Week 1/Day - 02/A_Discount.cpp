#include <bits/stdc++.h>
using namespace std;
int main()
{
    long double A, B;
    cin >> A >> B;
    long double discount_percentage = ((A - B) / A) * 100;
    cout << fixed << setprecision(20);

    cout << discount_percentage << endl;

    return 0;
}
