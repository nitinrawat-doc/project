#include <iostream>
using namespace std;
int power(int p, int q)
{
    if (q == 0)
        return 1;
    int x = power(p,q/2);
    if (q % 2 == 0)
        return x * x;
    else
        return x * x * p;
}
int main()
{
    int p;
    cout << "enter the base: ";
    cin >> p;
    int q;
    cout << "enter the power: ";
    cin >> q;
    cout << power(p, q);

    return 0;
}