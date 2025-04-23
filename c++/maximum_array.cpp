#include <iostream>
using namespace std;
int main()
{
    int arr[] = {25, 67, 43, 67, 54, 33, 76};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "maximum is: " << max;

    return 0;
}