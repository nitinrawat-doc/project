#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter the x: ";
    cin >> x;
    try

    {

        if (x == 0)
        {
            throw(x);
        }
        if (x == 100)
        {
            throw('x');
        }
        if (x == 200)
        {
            throw(5.5);
        }
        if (x == 50)
        {
            throw(3);
        }
        if (x == 90)
        {
            throw(2);
        }
    }

    catch (...)
    {
        cout << "some error occured";
    }
    return 0;
}