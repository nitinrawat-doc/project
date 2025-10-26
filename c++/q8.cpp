#include <iostream>
using namespace std;

class Distance {
private:
    int meters;

public:
    Distance() {
        meters = 0;
    }

    Distance(int m) {
        meters = m;
    }

    operator int() {
        return meters;
    }

    void display() {
        cout << "Distance: " << meters << " meters" << endl;
    }
};

int main() {
    Distance d1 = 100;
    d1.display();

    int m = d1;
    cout << "Meters as int: " << m << endl;

    return 0;
}