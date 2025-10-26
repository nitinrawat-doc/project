#include <iostream>
using namespace std;
template <class t>
class show
{
public:
    t a, b;
    show(t p, t q)
    {
        a = p;
        b = q;
    }
    t disp()
    {
        cout << a << "\t" << b << endl;
    }
};
int main()
{
    show<int> obj(30, 50);
    obj.disp();
    show<float> obj2(40.5, 568.4);
    obj2.disp();
    show<string> obj3("nitin", "rawat");
    obj3.disp();
    return 0;
}