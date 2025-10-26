#include <iostream>
using namespace std;

class Box {
private:
    float length;
    float width;
    float height;

public:
    
    Box(float l, float w, float h) {
        length = l;
        width = w;
        height = h;
    }

    
    friend void calculateVolume(Box b);
};


void calculateVolume(Box b) {
    float volume = b.length * b.width * b.height;
    cout << "Volume of the box: " << volume << endl;
}

int main() {
    Box myBox(2.5, 3.0, 4.0);  
    calculateVolume(myBox);    
    return 0;
}