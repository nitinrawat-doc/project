#include <iostream>
using namespace std;
#define n 3
#define m 3
sum(int arr[][m])
{

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
                result += arr[i][j];
        }
    }
    cout << "the sum of the diagonal is " << result << endl;
}
int main()
{

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "enter the " << i << " " << j << " elements: ";
            cin >> arr[i][j];
        }
    }
    sum(arr);

    return 0;
}