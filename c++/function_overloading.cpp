#include<iostream>
using namespace std;
class loading{
    public:
void sum(int a,int b){
    cout<<a+b<<endl;
}
void sum(int a,int b,int c){
    cout<<a+b+c<<endl;
}
void sum(int a,int b,int c,int d){
    cout<<a+b+c+d<<endl;
}
};
int main(){
    loading a;
    a.sum(4,6);
    a.sum(5,9);
    a.sum(3,5,7,8);
    return 0;

}