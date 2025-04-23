#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    int arr[n], pos[n], neg[n], zero[n];
    int pos_index=0,neg_index=0, zero_index=0;
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element: ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pos[pos_index] = arr[i];
            pos_index++;
        }
        if (arr[i] < 0)
        {
            neg[neg_index] = arr[i];

            neg_index++;
        }
        if (arr[i] == 0)
        {
            zero[zero_index] = arr[i];
            zero_index++;
        }
    }
    for (int i = 0; i < pos_index; i++)
    {
        cout << pos[i]<<"  ";
    }
    for (int i = 0; i < neg_index; i++)
    {
        cout << neg[i]<<"  ";
    }
    for (int i = 0; i < zero_index; i++)
    {
        cout << zero[i]<<"  ";
    }
    return 0;
}