#include<iostream>
using namespace std;
int sum(int n){
    if(n>=0&&n<=9) return n;
    return sum(n/10)+(n%10);
}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"sum is: "<<sum(n);
    return 0;
}