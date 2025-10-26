#include <iostream>
using namespace std;
class op
{
public:
    int a;
    op(int c)
    {
        a = c;
    }
    void disp()
    {
        cout << a << endl;
    }
    void operator++(int)
    {
        a = a + 1;
    }
};

int main()
{
    op aa(6);
    aa.disp();
    aa++;
    aa.disp();
    return 0;
}