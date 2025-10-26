#include <iostream>
#include <string>
using namespace std;
class Book {
private:
string title;
string author;
double price;
public:
Book() {
title = "again !";
author = "Nitin Rawat";
price = 150.25;
}
Book(string t, string a, double p) {
title = t;
author = a;
price = p;
}
Book(const Book &b) {
title = b.title;
author = b.author;
price = b.price;
}
void display() const {
cout << "Title: " << title << ", Author: " << author << ", Price: $" << price << endl;
}
};
int main() {
Book book1;
cout << "Book1: ";
book1.display();
Book book2("The commet", "Dr Datta", 250.55);
cout << "Book2: ";
book2.display();
Book book3 = book2;
cout << "Book3: ";
book3.display();
return 0;
}


