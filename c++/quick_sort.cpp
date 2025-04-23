#include <iostream>
using namespace std;
int partiton(int arr[], int last, int first)
{
    int pivot = arr[last];
    int i = first - 1;
    for (int j = first; j < last; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[last]);
    return i + 1;
}
void quick_sort(int arr[], int first, int last)
{
    if (first >= last)
        return;
    int pi = partiton(arr, last, first);
    quick_sort(arr, first, pi - 1);
    quick_sort(arr, pi + 1, last);
}
int main()
{

    int n;
    cout << "enter the array size: ";
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter the element: ";
        cin >> arr[i];
    }

    quick_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}