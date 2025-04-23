#include <iostream>
#include <vector>
using namespace std;
void spiral_matrix(vector<vector<int>> &v)
{
    int minr = 0;
    int maxr = v.size() - 1;
    int minc = 0;
    int maxc = v[0].size() - 1;
    int tne = (maxr + 1) * (maxc + 1);
    int count = 0;
    while (count < tne)
    {
        for (int j = minc; j <= maxc && count < tne; j++)
        {
            cout << v[minr][j] << " ";
            count++;
        }
        minr++;
        for (int i = minr; i <= maxr && count < tne; i++)
        {
            cout << v[i][maxc] << " ";
            count++;
        }
        maxc--;
        for (int j = maxc; j >= minc && count < tne; j--)
        {
            cout << v[maxr][j] << " ";
            count++;
        }
        maxr--;
        for (int i = maxr; i >= minr && count < tne; i--)
        {
            cout << v[i][minc] << " ";
            count++;
        }
        minc++;
    }
}
int main()
{
    int n;
    cout << "enter the rows: ";
    cin >> n;
    int m;
    cout << "enter the column: ";
    cin >> m;

    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "enter the element: ";
            cin >> v[i][j];
        }
    }
    spiral_matrix(v);

    return 0;
}
