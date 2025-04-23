#include <iostream>
#include <vector>
using namespace std;
bool preffix_suffix(vector<int> &v)
{
    int total_sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        total_sum += v[i];
    }
    int prefix_sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        prefix_sum += v[i];
        int suffix_sum = total_sum - prefix_sum;
        if (prefix_sum == suffix_sum)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cout << "enter the element: ";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cout << "enter the element: ";
        cin >> ele;
        v.push_back(ele);
    }
    cout << preffix_suffix(v) << " ";

    return 0;
}