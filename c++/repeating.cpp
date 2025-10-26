#include <iostream>
#include <unordered_map>
using namespace std;
void r(int arr[], int n)
{
    int count = 0;
    unordered_map<int, int> f;
    for (int i = 0; i < n; i++)
    {
        f[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (f[arr[i]] > 1)
        {
            count++;
            f[arr[i]]=-1;
            if (count == 3){
                cout <<"third repeating element is: "<< arr[i];
                return;
            }
        }
    }
}
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

    r(arr, n);
    return 0;
}