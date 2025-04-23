#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &v)
{
    int n = v.size();
    bool flag = false;
    for (int i = n - 1; i > 0; i--)
    {
        int j = 0;
        while (j != i)
        {
            if (v[j] == 0 && v[j + 1] != 0)
            {
                swap(v[j], v[j + 1]);
                flag = true;
            }
            j++;
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
        int ele;
        cout << "enter the element: ";
        cin >> ele;
        v.push_back(ele);
    }
    sort(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}