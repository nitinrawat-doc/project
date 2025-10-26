#include <iostream>
using namespace std;
class fibbo
{
public:
    int f(int n)
    {
        if (n < 2)
            return 1;
        return f(n - 1) + f(n - 2);
    }
};
int main()
{
    fibbo f1;
    int n;
    cout << "enter the number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << f1.f(i) << " ";
    }

    return 0;
}