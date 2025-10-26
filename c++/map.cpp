#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> m;
    m["tv"] = 50;
    m["mobile"] = 50;
    m["headphone"] = 100;
    m["table"] = 100;
    m["laptop"] = 500;
    for (auto val : m)
    {
        cout << val.first <<" "<< val.second << " \n";
    }
    return 0;
}