#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> q;  //priority queue is used for sorting and maximum element print on the top
    q.push(1);
    q.push(2);
    q.push(15);
    q.push(18);
    q.push(10);
    q.push(123);
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }

    return 0;
}