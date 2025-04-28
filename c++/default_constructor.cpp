#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    student(){
        name="nitin";
        age=19;
    }
void disp(){
    cout<<name<<"\t"<<age<<endl;
}

};

int main(){
    student s1;
    s1.disp();
    return 0;
}