#include <iostream>
using namespace std;
int main()
{
    int arr[] = {34, 56, 43, 65, 56, 33};
    int n = sizeof(arr) / sizeof(arr[0]);
    int search = 56;
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            idx = i;
            break;
        }
    }
    cout << "element is: " << idx;

    return 0;
}