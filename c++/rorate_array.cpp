#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
void rorate_array(vector<vector<int>> &v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            swap(v[i][j], v[j][i]);
        }
    }
    for (int i= 0; i < n; i++)
    {
        reverse(v.begin(), v.end());
    }
}
int main()
{
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "enter the element: ";
            cin >> v[i][j];
        }
    }
    rorate_array(v);
    for (int i = 0; i < n; i++)
    {
        for (int j =0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}