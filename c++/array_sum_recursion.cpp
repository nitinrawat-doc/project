#include <iostream>
using namespace std;
int sum(int *arr, int i, int n)
{
    if (i == n - 1)
        return arr[i];
    return arr[i] + sum(arr, i + 1, n);
}
int main()
{
    int arr[] = {2, 4, 6, 7, 9};
    int n = 5;
    cout << "sum is : " << sum(arr, 0, n);
    return 0;
}