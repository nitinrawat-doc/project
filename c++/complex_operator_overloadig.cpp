#include <iostream>
using namespace std;
class complex
{
public:
    int real;
    int image;
    complex(int r = 0, int i = 0)
    {
        real = r;
        image = i;
    }
    void disp()
    {
        cout << real << "+i" << image << endl;
    }
    complex operator+(complex bb)
    {
        complex cc;
        cc.real = real + bb.real;
        cc.image = image + bb.image;
        return cc;
    }
};
int main()
{
    complex aa(5, 2);
    complex bb(6, 3);
    complex cc;
    aa.disp();
    bb.disp();
    cc.disp();
    cc = aa + bb;
    aa.disp();
    bb.disp();
    cc.disp();

    return 0;
}