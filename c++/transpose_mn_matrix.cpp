#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the rows of matrix: ";
    cin >> n;
    int m;
    cout << "enter the column of matrix: ";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "enter the element: ";
            cin >> arr[i][j];
        }
    }
    int t[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            t[i][j] = arr[j][i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}