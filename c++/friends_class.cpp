#include <iostream>
using namespace std;
class nitin;
class student
{
private:
    string name;
    int age;

public:
    student(string n, int a)
    {
        name = n;
        age = a;
    }
    friend class nitin;
};
class nitin
{
    public:
    void f(student r1)
    {
        cout << "name: " << r1.name;
        cout << endl;
        cout << "age: " << r1.age;
    }
};

int main()
{
    student s1("nitin", 19);
    nitin n1;
    n1.f(s1);
    return 0;
}