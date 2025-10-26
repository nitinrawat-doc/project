#include <iostream>
using namespace std;
class demo
{
public:
    int x;
    demo(int n)
    {
        x = n;
    }
    void disp()
    {
        cout << x << endl;
    }
    void operator+=(demo bb)
    {
        x += bb.x;
    }
};
int main()
{
    demo aa(6);
    demo bb(7);
    aa.disp();
    bb.disp();
    aa += bb;
    aa.disp();
    bb.disp();

    return 0;
}