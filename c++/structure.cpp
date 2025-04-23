#include <iostream>
using namespace std;
struct student
{
    string name;
    int age;
    int rollno;

} s[3];
int main()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "enter name: ";
        cin >> s[i].name;
        cout << "enter age: ";
        cin >> s[i].age;
        cout << "enter rollno: ";
        cin >> s[i].rollno;
    }
    for (int i = 0; i < 3; i++)
    {cout<<"_________________________________________";
        cout<<endl;
        cout<<"|"<<"s.no." << i + 1;
        cout << "\t "<<"|" << s[i].name;
        cout << "\t " <<"|"<< s[i].age;
        cout << "\t " <<"|"<< s[i].rollno<<endl;
    }
    return 0;
}