#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<string, int> m;  //multi map mai hum multiple keys bana sakte hai
    m.emplace("tv", 10000);
    m.emplace("tv", 10000);
    m.emplace("tv", 10000);
    m.emplace("tv", 10000);
    m.emplace("tv", 10000);
    //if we erase all the tv just write erase function
    // m.erase("tv");
    //if we erase one tv then 
    m.erase(m.find("tv"));
    for (auto val : m)
    {
        cout << val.first << ": " << " " << val.second << endl;
    }

    return 0;
}