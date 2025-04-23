#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 4, 6, 7, 1};
    int x = 7;
    int n = sizeof(arr) / sizeof(arr[0]);
    int pairs = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                pairs++;
            }
        }
    }
    cout << "total pairs are: " << pairs;

    return 0;
}