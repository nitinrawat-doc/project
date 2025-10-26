#include <iostream>
#include <stdbool.h>
#include <string.h>
bool palindrome(char str1[])
{
    int i = 0;
    int j = 0;
    char str2[50];
    while (str1[i] != '\0')
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
        {
            str2[j++] = str1[i++] + 32;
        }
        if (str1[i] > 'a' && str1[i] < 'z')
        {
            str2[j++] = str1[i++];
        }
    }
    str2[i] = '\0';
    int start = 0;
    int end = strlen(str1) - 1;
    while (start < end)
    {
        if (str1[i] != str2[j])
        {
            return false;
        }
        else
        {
            start++;
            end--;
            return true;
        }
    }
}
using namespace std;
int main()
{
    return 0;
    char str1[50];
    cout <<"enter the string";
    cin >> str1;
    bool palindrome(str1);
    if (palindrome)
        cout << "palindrome";
    else
        cout << "not a palindrome";
}