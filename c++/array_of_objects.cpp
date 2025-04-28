#include<iostream>
using namespace std;
class Student {
    public:
        int rollNo;
        void setData(int r) {
            rollNo = r;
        }
        void display() {
            cout << "Roll Number: " << rollNo << endl;
        }
    };
    
    int main() {
        Student s[3]; // Array of 3 Student objects
    
        s[0].setData(101);
        s[1].setData(102);
        s[2].setData(103);
    
        for(int i = 0; i < 3; i++) {
            s[i].display();
        }
    
        return 0;
    }