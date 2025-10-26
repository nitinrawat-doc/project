#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter two numbers: ";
    cin >> a >> b;
    
    try{
        if (b != 0)
        {
            c = a / b;
            cout << c;
        }
       else
        {
            throw(b);
        }
    }
    catch (...)
    {
        cout << "divided by " << b;
    }
    return 0;
}