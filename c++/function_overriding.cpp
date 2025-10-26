#include <iostream>
using namespace std;
class a
{
public:
    int age=90;
  

    virtual void disp()
    {
        cout << "age: " << age;
    }
};
class b : public a
{

public:
    int marks=99;
   
    void disp()
    {
        cout << "marks: " << marks;
    }
};
int main()
{
    a *ptr1;
    b bb;
    ptr1 = &bb;
    ptr1->disp();

    return 0;
}