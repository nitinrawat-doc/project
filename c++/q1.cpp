#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    double price;

public:
    Book()
    {
        title = "Unknown Title";
        author = "Unknown Author";
        price = 0.0;
    }

    Book(const string &t, const string &a, double p)
        : title(t), author(a), price(p)
    {
    }

    Book(const Book &other)
        : title(other.title), author(other.author), price(other.price)
    {
    }

    void display() const
    {
        cout << "Title : " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price : $" << price << endl;
    }
};

int main()
{
    Book book1;
    cout << "Book1 (default constructor):" << endl;
    book1.display();
    cout << endl;

    Book book2("C++ Primer", "nitin", 49.99);
    cout << "Book2 (parameterized constructor):" << endl;
    book2.display();
    cout << endl;

    Book book3(book2);
    cout << "Book3 (copy constructor from Book2):" << endl;
    book3.display();
    cout << endl;

    return 0;
}