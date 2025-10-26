#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the elements: ";
        cin >> arr[i];
    }
    int f[n] = {0};
    for (int i = 0; i < n; i++)
    {
        if (f[i] == 1)
            continue;
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                f[j] = 1;
            }
        }
        cout << arr[i] << "-" << count << endl;
    }

    return 0;
}