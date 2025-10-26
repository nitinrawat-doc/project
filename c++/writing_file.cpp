#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream onfile;
    onfile.open("file.txt");
    onfile << "hi my name is nitin rawat";
    onfile.close();
    return 0;
}