#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    Complex operator-() {
        return Complex(-real, -imag);
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(Complex c) {
        return Complex(real - c.real, imag - c.imag);
    }

    friend istream& operator>>(istream& in, Complex& c);
    friend ostream& operator<<(ostream& out, Complex c);
};

istream& operator>>(istream& in, Complex& c) {
    cout << "Enter real part: ";
    in >> c.real;
    cout << "Enter imaginary part: ";
    in >> c.imag;
    return in;
}

ostream& operator<<(ostream& out, Complex c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

int main() {
    Complex c1, c2, sum, diff, neg;

    cout << "Enter first complex number:\n";
    cin >> c1;
    cout << "Enter second complex number:\n";
    cin >> c2;

    sum = c1 + c2;
    diff = c1 - c2;
    neg = -c1;

    cout << "\nFirst complex number: " << c1 << endl;
    cout << "Second complex number: " << c2 << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Negation of first: " << neg << endl;

    return 0;
}