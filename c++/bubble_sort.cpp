#include <iostream>
#include <vector>
using namespace std;
void bubble_sort(vector<int> &v)
{
    int n = v.size();
    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                flag = true;
            }
        }
        if (!flag)
            break;
    }
}
int main()
{
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element: ";
        int ele;
        cout << "enter the element: ";
        cin >> ele;
        v.push_back(ele);
    }
    bubble_sort(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i]<<" ";
    }
    return 0;
}