#include<iostream>
using namespace std;

class A {  
private:
    int data;
public:
    A(int value) : data(value) {}

    friend class B; // B is a friend of A
};

class B {
public:
    void showData(A obj) {
        cout << "Private data of A: " << obj.data << endl;
    }
};

int main() {
    A a1(50);
    B b1;
    b1.showData(a1); // B can access private data of A

    return 0;
}