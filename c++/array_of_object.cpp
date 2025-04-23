#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int age;
    void get_data()
    {
        cout << "enter the name: ";
        cin >> name;
        cout << "enter the age: ";
        cin >> age;
    }
    void put_data()
    {
        cout << "name: " << name;
        cout << "\t" << "age: " << age << endl;
        ;
    }
};
int main()
{
    student s1[2];
    for (int i = 0; i < 2; i++)
    {
        s1[i].get_data();
    }
    for (int i = 0; i < 2; i++)
    {
        s1[i].put_data();
    }

    return 0;
}