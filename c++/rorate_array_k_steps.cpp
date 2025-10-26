#include <iostream>
using namespace std;
void rorate(int arr[], int si, int ei)
{
    for (int i = si, j = ei; i <= j; i++, j--)
    {
        swap(arr[i], arr[j]);
    }
}
int main()
{
    int arr[] = {2, 3, 4, 56, 7, 8, 8, 1};
    int n = 8;
    int k = 4;
    k = k % n;
    rorate(arr, 0, n - 1);
    rorate(arr, 0, k - 1);
    rorate(arr, k, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
