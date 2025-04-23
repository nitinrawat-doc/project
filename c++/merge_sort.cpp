#include <iostream>
using namespace std;
void merge(int arr[], int l, int r, int mid)
{
    int an = mid - l + 1;
    int bn = mid - r;
    int a[an], b[bn];
    for (int i = 0; i < an; i++)
    {
        a[i] = arr[l + i];
    }
    for (int j = 0; j < bn; j++)
    {
        b[j] = arr[mid + 1 + j];
    }
    int i = 0, j = 0, k = l;
    while (i < an && j < bn)
    {
        if (a[i] < b[j])
        {
            arr[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < an)
    {
        arr[k] = arr[i];
        k++;
        i++;
    }
    while (j < bn)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}
void merge_sort(int arr[], int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) / 2;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid + 1, r);
    merge(arr, l, r, mid);
}
int main()
{
    int arr[] = {9, 7, 5, 4, 3, 5, 6, 7, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    merge_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}