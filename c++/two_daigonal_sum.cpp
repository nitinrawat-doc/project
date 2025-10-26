#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "enter the rows: ";
    cin >> n;
    int m;
    cout << "enter the column: ";
    cin >> m;
    vector<vector<int>> arr(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "enter element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    int sum2 = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
            else if (i + j == m- 1)
            {
                sum2 += arr[i][j];
            }
        }
    }
    cout << "sum: " << sum;
    cout << endl;
    cout << "sum2: " << sum2;
    return 0;
}