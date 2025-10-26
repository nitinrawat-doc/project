#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element: ";
        cin >> arr[i];
    }
    map<int, int> f;
    for (int i = 0; i < n; i++)
    {
        f[arr[i]]++;
    }
    for (auto it : f)
    {
        cout << it.first << "-->" << it.second << endl;
    }
    return 0;
}