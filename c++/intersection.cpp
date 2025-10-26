#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the array size: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element: ";
        cin >> a[i];
    }
    int m;
    cout << "enter the array size: ";
    cin >> m;
    int b[m];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element: ";
        cin >> b[i];
    }

    int c[m + n];
    int k = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                flag = true;
            }
        }
        if (flag)
        {
            c[k++] = a[i];
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}