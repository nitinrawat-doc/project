#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string brand;
    int year;
public:
    Vehicle(string b = "Unknown", int y = 0) {
        brand = b;
        year = y;
    }
    void showVehicle() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

class Car : virtual public Vehicle {
public:
    Car(string b = "Unknown", int y = 0) : Vehicle(b, y) {}
};

class Bike : virtual public Vehicle {
public:
    Bike(string b = "Unknown", int y = 0) : Vehicle(b, y) {}
};

class ElectricVehicle : public Car, public Bike {
public:
    ElectricVehicle(string b, int y) : Vehicle(b, y), Car(b, y), Bike(b, y) {}
    void show() {
        showVehicle();
        cout << "This is an electric vehicle." << endl;
    }
};

int main() {
    ElectricVehicle ev("Tesla", 2023);
    ev.show();
    return 0;
}