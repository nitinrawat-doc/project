#include <iostream>
using namespace std;
class ayush;
class nitin
{
private:
    int money = 10;
    friend void divyansh(nitin, ayush);
};
class ayush
{
private:
    int money = 20;
    friend void divyansh(nitin, ayush);
};
void divyansh(nitin r1, ayush r2)
{

    cout << "sum is: " << r1.money + r2.money;
}
int main()
{
    nitin n1;
    ayush a1;
    divyansh(n1, a1);
    return 0;
}