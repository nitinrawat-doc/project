#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    cout << "reverse order";
    cout << endl;
    for (auto it = v.rbegin(); it < v.rend(); it++)
    {
        cout << *(it) << " ";
    }

    return 0;
}