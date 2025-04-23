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
    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if (arr[i + 1] - arr[i] != d)
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
        cout << "this is  an ap";
    else
        cout << "this is not an ap";

    return 0;
}