#include <iostream>
using namespace std;
class demo
{
public:
    int x;
    demo(int y)
    {
        x = y;
    }
    void disp()
    {
        cout << x << endl;
    }
    void operator++()
    {
        x = x + 1;
    }
};

int main()
{
    demo aa(5);

    aa.disp();
    ++aa;
    aa.disp();
    return 0;
}