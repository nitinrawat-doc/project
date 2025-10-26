#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(4);
    l.push_back(6);
    l.push_front(1);
    l.push_front(2);
    l.pop_back();
    l.pop_front();
    for (int val : l)
    {
        cout << val << " ";
    }
    return 0;
}