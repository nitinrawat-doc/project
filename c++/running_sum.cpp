#include <iostream>
#include <vector>
using namespace std;
void running_sum(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        v[i] += v[i - 1];
    }
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
        cout <<"enter the element: ";
        cin >> ele;
        v.push_back(ele);
    }
    running_sum(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << "  ";
    }
    return 0;
}