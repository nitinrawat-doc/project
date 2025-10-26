#include <iostream>
using namespace std;

void missing(int arr1[], int arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr1[i] != arr2[i])
        {
            cout
                << "missing element is: " << arr1[i] << endl;
        }
    }
}
int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 2, 3, 3, 5};

    missing(arr1, arr2, 5);

    return 0;
}