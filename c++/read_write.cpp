#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream onfile;

    onfile.open("file2.txt");
    onfile << "emp_name nitin \n";
    onfile << "id 1001";
    onfile.close();

    ifstream infile;
    string str;
    infile.open("file2.txt");
    while (getline(infile, str))
    {
        cout << str;
    }

    infile.close();
    return 0;
}