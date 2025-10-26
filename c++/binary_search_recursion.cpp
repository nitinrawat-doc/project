#include <iostream>
#include <vector>
using namespace std;
int binary_search(vector<int> &v, int target, int l, int h)
{
    if (l > h)
        return -1;
    int mid = (l + h) / 2;
    if (v[mid] == target)
        return mid;
    else if (v[mid] < target)
        return binary_search(v, target, mid + 1, h);
    else
        return binary_search(v, target, l, mid - 1);
}
int main()
{
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cout << "enter the elements: ";
        cin >> v[i];
    }
    int target;
    cout << "enter the target: ";
    cin >> target;

    cout << "the target element index is: " << binary_search(v, target, 0, n - 1) << " ";

    return 0;
}