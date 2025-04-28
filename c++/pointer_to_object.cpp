#include<iostream>
using namespace std;
class Student {
    public:
        void show() {
            cout << "Hello Student";
        }
    };
    
    int main() {
        Student s;
        Student *ptr = &s;
        ptr->show();  // Using pointer to call function
        return 0;
    }