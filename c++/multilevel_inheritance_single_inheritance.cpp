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
    void disp()
    {
        cout << "name: " << name << "\t" << "age" << age;
    }
};
class nitin : public student
{
public:
    int marks;
    nitin(string n, int a, int m) : student(n, a)
    {
        marks = m;
    }
    void print()
    {
        cout << "\t" << "marks: " << marks << endl;
    }
};
class grandfather
{
public:
    string name;
    grandfather(string g)
    {
        name = g;
    }
    void d()
    {
        cout << "grandfather name: " << name << endl;
    }
};
class father : public grandfather
{
public:
    string father_name;
    father(string g, string fn) : grandfather(g)
    {
        father_name = fn;
    }
    void p()
    {
        cout << "\nfather name :" << father_name;
    }
};
class son : public father
{
public:
    string son_name;
    son(string g, string fn, string s) : father(g, fn)
    {
        son_name = s;
    }
    void pr()
    {
        cout << "\nson name: " << son_name;
    }
 };
int main()
{
    nitin n1("ayush", 19, 99);
    n1.disp();
    n1.print();
    son s1("shurbindra", "suresh", "sourav");
    s1.d();
    s1.p();
    s1.pr();
    return 0;
 }