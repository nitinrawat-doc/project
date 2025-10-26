#include <iostream>
using namespace std;
template <class t>
t show(t a, t b)
{
    cout << a << "\t" << b << endl;
}
template <class p>
p show(p a, p b, p c)
{
    cout << a << "\t" << b << "\t" << c;
}
int main()
{
    int p = 30, q = 50;
    show(p, q);
    float m = 40.5, n = 89.4;
    show(m, n);
    string name = "nitin";
    string surname = "rawat";
    show(name, surname);
    int r = 320;
    show(p, q, r);

    return 0;
}