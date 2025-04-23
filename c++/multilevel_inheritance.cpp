#include <iostream>
using namespace std;
class a
{
public:
    int a;
    void data_a()
    {
        cout << "enter the number: ";
        cin >> a;
    }
};
class b : public a
{
public:
    int b;
    void data_b()
    {
        cout << "enter the number: ";
        cin >> b;
    }
};
class c : public b
{
public:
    int c;
    void data_c()
    {
        cout << "enter the number: ";
        cin >> c;
        int sum = a + b + c;
        cout << "sum is: " << sum;
    }
};
int main()
{
    c c1;
    c1.data_a();
    c1.data_b();
    c1.data_c();

    return 0;
}