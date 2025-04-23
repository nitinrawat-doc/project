#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
void selection_sort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n-1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] < v[min_idx])
            {
                min_idx = j;

            }
            if(i!=min_idx){
                swap(v[i], v[min_idx]);

            }

            
            
        }
    }
}
using namespace std;
int main()
{
    int n;
    cout << "enter the size: ";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cout << "enter the element: ";
        cin >> ele;
        v.push_back(ele);
    }
    selection_sort(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}