#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int *ptr=arr;
    cout<<*ptr<<endl;
    ptr++;
    cout<<*ptr<<endl;
    ptr=ptr+3;
    cout<<*ptr;
    ptr=ptr-1;
    cout<<endl;
    cout<<*ptr;
    int *ptr2=arr;
    cout<<endl;
    cout<<*ptr-*ptr2;

    return 0;

}