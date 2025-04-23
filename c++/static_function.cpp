#include <iostream>
using namespace std;
class sta
{
public:
    int a;
    static int b;
    sta(int an, int bn)
    {
        a = an;
        b = bn;
    }
    void put_data()
    {
        cout << a << "\t" << b << endl;
    }
    static void disp()
    {
        cout << b << endl;
    }
};
int sta::b = 0;
int main()
{
    sta s1(10, 20);

    s1.put_data();
    sta s2(40, 50);
    s2.put_data();
    sta::disp();
    s1.put_data();
    return 0;
}