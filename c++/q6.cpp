#include <iostream>
using namespace std;


class Garage;

class Car {
private:
    string model;
    string engine_number;

public:
    
    Car(string m, string e) {
        model = m;
        engine_number = e;
    }

    
    friend class Garage;
};

class Garage {
public:
    void displayCarInfo(Car c) {
        
        cout << "Car Model: " << c.model << endl;
        cout << "Engine Number: " << c.engine_number << endl;
    }
};

int main() {
    Car myCar("Toyota Fortuner", "ENG12345");
    Garage myGarage;
    myGarage.displayCarInfo(myCar);  
    return 0;
}