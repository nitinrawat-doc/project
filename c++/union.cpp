#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the array size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element: ";
        cin >> arr[i];
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

    for (int i = 0; i < n; i++)
    {
        c[k++] = arr[i];
    }
    int flag=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {


            if (arr[i] == b[j])
            {
              flag=1;
            }
        }
        if(flag==0){
            c[k++]=b[i];
        }
    }

    for (int i = 0; i < k; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}