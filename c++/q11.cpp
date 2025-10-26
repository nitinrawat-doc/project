#include <iostream>
using namespace std;

template <typename T>
T maxTwo(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}

// Overloaded function for three values
template <typename T>
T maxThree(T a, T b, T c) {
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}

int main() {
    cout << "Max of 5 and 9: " << maxTwo(5, 9) << endl;
    cout << "Max of 2, 8 and 6: " << maxThree(2, 8, 6) << endl;

    return 0;
}