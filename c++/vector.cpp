#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 4, 4, 5, 6};
    v.erase(v.begin() + 2);
    v.insert(v.begin() + 2, 3);

    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "size: " << v.size();
    


    return 0;
}