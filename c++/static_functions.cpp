#include <iostream>
using namespace std;

class Student {
    int rollNo;
    static int count; // Static data member

public:
    Student(int r) {
        rollNo = r;
        count++;
    }

    void display() {
        cout << "Roll Number: " << rollNo << endl;
    }

    static void showCount() { // Static member function
        cout << "Total Students: " << count << endl;
    }
};

// Definition of static data member outside the class
int Student::count = 0;

int main() {
    Student s1(101);
    Student s2(102);
    Student s3(103);

    s1.display();
    s2.display();
    s3.display();

    // Calling static function using class name
    Student::showCount();

    return 0;
}