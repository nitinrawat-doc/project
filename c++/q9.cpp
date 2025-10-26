#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculateSalary() = 0;
};

class FullTime : public Employee {
    int monthlySalary;
public:
    FullTime(int salary) {
        monthlySalary = salary;
    }
    void calculateSalary() {
        cout << "FullTime Salary: " << monthlySalary << endl;
    }
};

class PartTime : public Employee {
    int hoursWorked;
    int hourlyRate;
public:
    PartTime(int hours, int rate) {
        hoursWorked = hours;
        hourlyRate = rate;
    }
    void calculateSalary() {
        cout << "PartTime Salary: " << hoursWorked * hourlyRate << endl;
    }
};

int main() {
    FullTime ft(50000);
    PartTime pt(80, 200);

    Employee* emp1 = &ft;
    Employee* emp2 = &pt;

    emp1->calculateSalary();
    emp2->calculateSalary();

    return 0;
}