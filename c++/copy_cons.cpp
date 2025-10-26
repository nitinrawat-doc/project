#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int age;
    student(string n, int a)
    {
        name = n;
        age = a;
    }
    student(const student &a)
    {
        name = a.name;
        age = a.age;
    }

    void disp()
    {
        cout << "name: " << name << endl
             << "age: " << age << endl;
    }
};
int main()
{
    student s1("nitin", 19);
    student s2 = s1;
    s1.disp();
    s2.disp();
    return 0;
}