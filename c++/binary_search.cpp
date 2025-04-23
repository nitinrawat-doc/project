#include <iostream>
#include <vector>
using namespace std;
int binary_search(vector<int> &v, int target)
{
    int low = 0;
    int hi = v.size() - 1;
    while (low <= hi)
    {
        int mid = (low + hi) / 2;
        if (v[mid] == target)
            return mid;
        else if (v[mid] < target)
            hi = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int main()
{
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cout << "enter the element: ";
        cin >> ele;
        v.push_back(ele);
    }
    int target;
    cout << "enter your target: ";
    cin >> target;
    cout << binary_search(v, target);
    return 0;
}