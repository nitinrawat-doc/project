#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    cout << *ptr << endl;
    int **ptr2 = &ptr;
    cout << **ptr2 << endl;
    int b = 50;

    cout << b << endl;
    int *ptrr = &b;
    cout << *ptrr << endl;
    int **ptrrr = &ptrr;
    cout << **ptrrr << endl;

    return 0;
}