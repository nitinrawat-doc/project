#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int age;
    int rollno;
    student(string n, int a, int r)
    {
        name = n;
        age = a;
        rollno = r;
    }
    void print()
    {
        cout << name;
        cout << "\t" << age;
        cout << "\t" << rollno << endl;
    }
};
int main()
{
    student s1("nitin", 19, 47);
    student s2("abc", 45, 34);
    student s3=s2;
    s3.name="ayush";
    s3.print();
    s1.print();
    s2.print();
    return 0;
}