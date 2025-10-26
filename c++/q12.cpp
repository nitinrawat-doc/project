#include <iostream>
#include <fstream>
using namespace std;

struct Student
{
    string name;
    int roll;
    float marks;
};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter name, roll number and marks of student " << i + 1 << ": ";
        cin >> s[i].name >> s[i].roll >> s[i].marks;
    }

    ofstream outFile("students.txt");
    for (int i = 0; i < n; i++)
    {
        outFile << s[i].name << " " << s[i].roll << " " << s[i].marks << endl;
    }
    outFile.close();

    ifstream inFile("students.txt");
    string name;
    int roll;
    float marks;

    cout << "\nStudent Records from File:\n";
    while (inFile >> name >> roll >> marks)
    {
        cout << "Name: " << name << ", Roll: " << roll << ", Marks: " << marks << endl;
    }
    inFile.close();

    return 0;
}