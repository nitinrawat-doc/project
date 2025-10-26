#include <iostream>
using namespace std;
class A
{
public:
    int a;
    static int b;
    A(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << a << " " << b << endl;
    }
    static void disp()
    {
        cout << b;
    }
};
int A::b = 0;
int main()
{
    A obj1(10, 30);
    A obj2(50, 70);
    obj1.show();
    obj2.show();
    A::disp();
    return 0;
}
