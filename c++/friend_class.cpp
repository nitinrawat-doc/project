#include <iostream>
using namespace std;
class garage;
class car
{
private:
    string name;
    int price;

public:
    car(string n, int p)
    {
        name = n;
        price = p;
    }
    friend class garage;
};
class garage
{
public:
    void disp(car c)
    {
        cout << c.name << endl;
        cout << c.price << endl;
    }
};
int main()
{
    car c("toyota", 5000000);
    garage g;
    g.disp(c);
    return 0;
}