#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    queue<int> q2;
    q.swap(q2);
    cout << q.size();
    cout << endl;
    cout << q2.size();
    cout << endl;
    while (!q2.empty())
    {
        cout << q2.front() << " ";
        q2.pop();
    }

    return 0;
}