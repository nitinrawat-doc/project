#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream infile;
    string str;
    infile.open("file.txt");
    while (getline(infile, str))
    {
        cout << str;
    }
    infile.close();
    return 0;
}
