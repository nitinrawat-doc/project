#include <iostream>
using namespace std;
class demo
{
public:
    int x;
    demo(int n = 0)
    {
        x = n;
    }
    void disp()
    {
        cout << x << endl;
    }
    void operator=(demo aa)
    {
        x = aa.x;
    }
};
int main()
{
    demo aa(6);
    demo bb;
    aa.disp();
    bb.disp();
    bb = aa;
    aa.disp();
    bb.disp();

    return 0;
}