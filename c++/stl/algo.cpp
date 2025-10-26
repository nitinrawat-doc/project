#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8};
    cout << binary_search(v.begin(), v.end(), 7);
    cout << "\n";
    cout << *max_element(v.begin(), v.end());
    cout << "\n";

    cout << *min_element(v.begin(), v.end());
    cout << "\n";

    return 0;
}