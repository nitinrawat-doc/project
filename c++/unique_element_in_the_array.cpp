#include <iostream>
#include <stdbool.h>
using namespace std;
int main()
{
    int arr[] = {2,4,5,6,6,5,4,};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag ==false)
        {
            cout << arr[i];
        }
    }

    return 0;
}
