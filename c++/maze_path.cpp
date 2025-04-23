#include <iostream>
using namespace std;
int maze_path(int n, int m)
{
    int right_way = 0;
    int down_way = 0;
    if (n == 1 && m == 1)
        return 1;
    if (n == 1)
    {
        right_way += maze_path(n, m - 1);
    }
    if (m == 1)
    {
        down_way += maze_path(n - 1, m);
    }
    if (n > 1 && m > 1)
    {
        right_way += maze_path(n, m - 1);
        down_way += maze_path(n - 1, m);
    }
    int total_ways = right_way + down_way;
    return total_ways;
}
int main()
{
    int n;
    cout << "enter the row: ";
    cin >> n;
    int m;
    cout << "enter the column: ";
    cin >> m;
    cout << maze_path(m, n);
    return 0;
}