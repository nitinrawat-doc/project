#include<iostream>
using namespace std;
class demo{
public:
demo(){
    cout<<"default constructor called"<<endl;
}
~demo(){
    cout<<"default destructor called"<<endl;
}
};
int main(){
    demo d1;
    return 0;
}