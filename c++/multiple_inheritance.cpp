#include <iostream>
using namespace std;
class a
{
public:
    int num1;
    a()
    {
        cout << "enter the num1: ";
        cin >> num1;
    }
};
class b
{
public:
    int num2;
    b()
    {
        cout << "enter the num2: ";
        cin >> num2;
    }
};
class c : public a, public b
{
public:
    int num3, sum = 0;
    c()
    {
        cout << "enter the num3: ";
        cin >> num3;
        sum = num1 + num2 + num3;
        cout << "sum is: " << sum;
    }
};
int main()
{
    c c1;
    return 0;
}