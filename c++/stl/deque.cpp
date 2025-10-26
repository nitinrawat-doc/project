#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> q{1,2,3,4,5,6};
    // q.push_back(4);
    // q.push_back(1);
    // q.push_back(6);
    // q.push_front(1);
    // q.push_front(2);
    // q.pop_back();
    // q.pop_front();
    for (int val : q)
    {
        cout << val << " ";
    }
    return 0;
}