#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    stack<int>s2;
    s.swap(s2);
    cout<<s.size();
    cout<<endl;
     cout<<s2.size();
     cout<<endl;
    while (!s2.empty())
    {
        cout << s2.top()
             << " ";
        s2.pop();
    }

    return 0;
}