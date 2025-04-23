#include <iostream>
using namespace std;
int max(int *arr, int i, int n)
{
    if (i == n - 1)
        return arr[i];
    return max(arr[i], max(arr, i + 1, n));
}
int main()
{
    int arr[] = {23, 43, 53, 65, 3, 54, 75, 34};
    int n = 8;
    cout << "max is: " << max(arr, 0, n);
    return 0;
}