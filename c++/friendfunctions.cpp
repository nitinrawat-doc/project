#include <iostream>
using namespace std;
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
    friend void ayush(student);
};
void ayush(student r1)
{
    cout << "name: " << r1.name;
    cout << "\n"
         << "age: " << r1.age;
}
int main()
{
    student s1("nitin", 19);
    ayush(s1);

    return 0;
}