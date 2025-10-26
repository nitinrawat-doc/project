#include <iostream>
using namespace std;
class distance
{
    public:
    int m;
    int mm;
    int cm;
    distance(int a = 0, int b = 0, int c = 0)
    {
        m = a;
        mm = b;
        cm = c;
    }
    distance operator+(distance bb)
    {
        distance cc;
        cc.m = m + bb.m;
        cc.mm = mm + bb.mm;
        cc.cm = cm + bb.cm;
        return cc;
    }
    distance operator-(distance bb)
    {
        distance xx;
        xx.m = m - bb.m;
        xx.mm = mm - bb.mm;
        xx.cm = cm - bb.cm;
        return xx;
    }
    void disp()
    {
        cout << "m: " << m << "mm: " << mm << "cm: " << cm << endl;
    }
};
int main()
{
    distance aa(2, 4, 5);
    distance bb(4, 56, 7);
    distance cc;
    cc = aa + bb;
    cc = aa - bb;
    aa.disp();
    bb.disp();

    return 0;
}