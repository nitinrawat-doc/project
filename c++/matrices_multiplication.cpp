#include <iostream>
using namespace std;
int main()
{
    int r1;
    cout << "enter the size of row of 1st matrix: ";
    cin >> r1;
    int c1;
    cout << "enter the column of 1st matrix: ";
    cin >> c1;
    int a[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "enter the elements: ";
            cin >> a[i][j];
        }
    }
    int r2;
    cout << "enter the rows of 2nd matrix: ";
    cin >> r2;
    int c2;
    cout << "enter the column of 2nd matrix: ";
    cin >> c2;
    int b[r2][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "enter the elements: ";
            cin >> b[i][j];
        }
    }
    if (c1 != r2)
        cout << "this matix cannot be multiplied";
    else
    {
        int c[r1][c2];
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                int value = 0;
                for (int k = 0; k < r2; k++)
                {
                    value += a[i][k] * b[k][j];
                }
                c[i][j] = value;
            }
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}