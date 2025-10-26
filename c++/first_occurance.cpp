#include <iostream>
using namespace std;

#include <vector>
int first_occurance(vector<int> &v, int target)
{
    int l = 0;
    int h = v.size() - 1;
    int ans = -1;
    
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (v[mid] == target)
        {
            ans=mid;
            h = mid - 1;
        }
        else if (v[mid] > target)
            h = mid - 1;
        else
            l = mid + 1;
    }
    return ans;
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
    cout << first_occurance(v, target);
    return 0;
}