#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the array size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element: ";
        cin >> arr[i];
    }
    if (n < 2)
        cout << "this is not an ap";
    int d = arr[1] - arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i + 1] - arr[i] != d)
        {
            int missing = arr[i] + d;
            cout <<"element: "<< missing << endl;
            break;
        }
       
    }
   

    return 0;
}