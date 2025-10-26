#include <iostream>
using namespace std;
int s(int n)
{
    int l = 1;
    int h = n;
    int ans = -1;
    while (l <= h)
    {
        int mid = (h + l) / 2;
        if (mid * mid <= n)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            h = mid - 1;
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    cout << s(n);
    return 0;
}