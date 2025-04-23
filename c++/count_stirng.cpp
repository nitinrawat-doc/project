#include<iostream>
using namespace std;
int main(){
    char ch[100];
    cout<<"enter string: ";
    gets(ch);
    
    int length=0;
    int i=0;;
    while(ch[i]!='\0'){
    length++;
    i++;
    }
    cout<<"length of  the string is: "<<length;

    return 0;
}