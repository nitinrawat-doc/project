#include <iostream>
using namespace std;
class demo
{
public:
    int a;

    demo(int x = 0)
    {
        a = x;
    }
    void disp()
    {
        cout << a;
    }
    demo operator-(demo bb)
    {
        demo cc;
        cc.a = a - bb.a;
        return cc;
    }
};

int main()
{
    demo aa(5);
    demo bb(9);
    demo cc;
    cc = aa - bb;
    cc.disp();
    return 0;
}