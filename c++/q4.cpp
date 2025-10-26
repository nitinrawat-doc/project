#include <iostream>
using namespace std;

class Base {
public:
    
    void display() {
        cout << "Display with no parameters" << endl;
    }

    void display(int x) {
        cout << "Display with one int: " << x << endl;
    }

    void display(int x, int y) {
        cout << "Display with two ints: " << x << ", " << y << endl;
    }


    virtual void show() {
        cout << "Base class show() called" << endl;
    }
};

class Derived : public Base {
public:

    void show() override {
        cout << "Derived class show() called" << endl;
    }
};

int main() {
    Base b;

    
    b.display();
    b.display(5);
    b.display(3, 7);

    cout << endl;

    
    Base* ptr;
    Derived d;

    ptr = &b;
    ptr->show();  

    ptr = &d;
    ptr->show();  

    return 0;
}