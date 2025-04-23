#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    int lastdigit;
    int r = 0;
    while (n > 0)
    {
        lastdigit = n % 10;
        r = (r * 10) + lastdigit;
        n /= 10;
    }
    cout << "reverse is: " << r;

    return 0;
}