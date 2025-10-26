#include <iostream>

using namespace std;
int main()
{
    // pair<int ,int >p{1,2};
    // cout<<p.first;
    // cout<<endl;
    // cout<<p.second;
    pair < int, pair<string, int>> p{5, {"nitin", 19}};
    cout << p.first;
    cout << endl;
    cout << p.second.first;
    cout << endl;
    cout << p.second.second;

    return 0;
}