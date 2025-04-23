#include <iostream>
using namespace std;
class student{
public:
string name;
int age;
int rollno;
student(string n,int a,int r){
    name =n;
    age=a;
    rollno=r;

}
void print(){
    cout<<name;
    cout<<"\t"<<age;
    cout<<"\t"<<rollno<<endl;

}

};

int main()
{
student s1("nitin",19,47);
student s2("abc",3,54);
student s3("xyz",3,54);
s1.print();
s2.print();
s3.print();

    return 0;
}