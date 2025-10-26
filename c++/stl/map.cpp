#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> m;
    m["tv"] = 10000;
    m["table"] = 2000;
    m["fridge"] = 5900;
    m["sofa"] = 5900;

    m["fan"] = 45000;
    m.emplace("laptop", 4500000);
    m.erase("sofa");
    for (auto val : m)
    {
        cout << val.first << ": " << " " << val.second << endl;
    }
    cout << "count: " << m.count("tv");
    if (m.find("tv") != m.end()) // if key is exists then it wil return  iterator and if not found then it will return last value i.e m.end()
    {
        cout << "\nfound\n";
    }
    else
    {
        cout << "\nnot found\n";
    }
    auto itr = m.find("fan");
    if (itr != m.end())
    {
        cout << itr->first<<itr->second;
    }
    else
    {
        cout << "element not found";
    }
    return 0;
}