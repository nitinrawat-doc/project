#include <iostream>
using namespace std;
void print(int *arr, int i, int n)
{
    if (i == n)
        return;
    cout << arr[i]<<" ";
    print(arr, i + 1, n);
}
int main()
{
    int n;
    cout << "entet the size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element: ";
        cin >> arr[i];
    }
    print(arr, 0, n);
    return 0;
}