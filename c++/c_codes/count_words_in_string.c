#include <stdio.h>
int main()
{
    char str[50];
    printf("enter the string: ");
    gets(str);
    int i = 0;
    int c = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            c++;
            i++;
        }
    }
    printf("spaces in this are %d", c);
    return 0;
}