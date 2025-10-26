
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Student : virtual public Person {
public:
    string college;
};

class Employee : virtual public Person {
public:
    string company;
};

class Intern : public Student, public Employee {
public:
    Intern(string n, int a, string c, string comp) {
        name = n;
        age = a;
        college = c;
        company = comp;
    }

    void show() {
        cout << "Name: " << name << ", Age: " << age << endl;
        cout << "College: " << college << ", Company: " << company << endl;
    }
};

int main() {
    Intern i("Nitin", 20, "Graphic Era", "Google");
    i.show();

    return 0;
}