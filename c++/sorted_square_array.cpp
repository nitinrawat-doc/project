#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void sort_array(vector<int> &v)
{
    int left_ptr = 0;
    int right_ptr = v.size() - 1;
    vector<int> ans;
    while (left_ptr <= right_ptr)
    {
        if (abs(v[left_ptr]) < abs(v[right_ptr]))
        {

            ans.push_back(v[right_ptr] * v[right_ptr]);
            right_ptr--;
        }
        else
        {
            ans.push_back(v[left_ptr] * v[left_ptr]);
            left_ptr++;
        }
    }
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size() ; i++)
    {
        cout << ans[i] << "  ";
    }
}
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cout << "enter the element: ";
        cin >> ele;
        v.push_back(ele);
    }
    sort_array(v);

    return 0;
}
