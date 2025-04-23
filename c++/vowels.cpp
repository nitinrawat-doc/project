#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter the character: ";
    cin >> ch;
    switch (ch)
    {
    case 'a':
        cout << "vowel";
        break;
    case 'e':
        cout << "vowel";
        break;
    case 'i':
        cout << "vowel";
        break;
    case 'o':
        cout << "vowel";
        break;
        case 'u':
        cout << "vowel";
        break;
        default:
        cout << "constant";
    }
    return 0;
}