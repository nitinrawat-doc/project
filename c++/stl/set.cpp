#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    // s.insert(3);
    s.insert(4);
    s.insert(1);
    s.insert(2);
    // s.insert(3);
    auto it = s.find(2);
    if (it != s.end())
    {
        cout << *it;
    }
    else
    {
        cout << "element not found";
    }

    cout << endl;
    for (auto val : s)
    {
        cout << val << " ";
    }
    cout << endl;
    cout <<"lower bound: "<< *s.lower_bound(3); //lower bound means agar vo value hai toh sahi ahi varna usse ek larger value print hogi
    cout<<endl;
     cout<<"upper bound: "<<*s.upper_bound(2); //upper bound means ki jo value hamne dali hai uss value ko ignore karke usse larger values print hongi 

    return 0;
}