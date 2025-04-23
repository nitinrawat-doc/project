#include <iostream>
using namespace std;
bool f(int *arr, int i, int n, int t)
{
    if (i == n)
        return false;
    return arr[i]==t|| f(arr, i + 1, n, t);
}
int main()
{
    int arr[] = {3, 5, 6, 8, 6};
    int n = 5;
    int t = 8;
    bool result = f(arr, 0, n, t);
    if (result)
        cout << "true";
    else
        cout << "false";
    return 0;
}