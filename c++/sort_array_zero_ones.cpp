#include <iostream>
#include <vector>
using namespace std;
void sort_zero_one(vector<int> &v)
{
    int left_ptr = 0;
    int right_ptr = v.size() - 1;
    while (left_ptr < right_ptr)
    {
        if (v[left_ptr] == 1 && v[right_ptr] == 0)
        {
            swap(v[left_ptr], v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        else if (v[right_ptr] == 1)
            right_ptr--;
        else if (v[left_ptr] == 0)
        {
            left_ptr++;
        }
    }
    return;
}
int main()
{
    int n;
    cout << "enter the number : ";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element: ";
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    sort_zero_one(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << "  ";
    }

    return 0;
}