#include <iostream>
using namespace std;
int main()
{
    int n,odd=0,even=0;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the element: ";
        cin>>arr[i];

    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else odd++;
    }
    cout<<"even number is: "<<even<<endl<<"odd number is: "<<odd;
    return 0;
}