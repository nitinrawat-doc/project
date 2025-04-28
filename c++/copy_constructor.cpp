#include<iostream>
using namespace std;
class student{
public:
    string name;
int age;
student(string n,int a){
    name =n;
    age=a;
}
void disp(){
    cout<<name<<"\t"<<age<<endl;
}

};
int main(){
    student s1("nitin",19);
    student s2=s1;
    s1.disp();
    s2.disp();
    return 0;

}