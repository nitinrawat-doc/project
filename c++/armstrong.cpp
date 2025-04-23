#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,sum=0;
    cout << "enter the number: ";
    cin >> n;
    int ori_num = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
         sum = sum +(lastdigit*lastdigit*lastdigit);
        n /= 10;
    }
    if (sum== ori_num)
        cout << "armstrong nnumber";
    else
        cout << "not an armstrong number";

    return 0;
}
