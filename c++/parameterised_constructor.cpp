#include<iostream>
using namespace std;
class rectangle{
public:
int length;
int breadth;
rectangle(int l,int b){
    length=l;
    breadth=b;
   
}
int area(){
    return length*breadth;
}
};
int main(){
    rectangle r1(4,6);
    cout<<"area of the rectangle is: "<<r1.area();
    return 0;
}
