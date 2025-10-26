#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    virtual void sound() { cout << "Animal sound" << endl; }
};

class Dog : public Animal
{
public:
    void sound() override { cout << "Woof! Woof!" << endl; }
};

class Cat : public Animal
{
public:
    void sound() override { cout << "Meow! Meow!" << endl; }
};

int main()
{
    Animal *animalPtr;
    Dog dog;
    Cat cat;

    animalPtr = &dog;
    animalPtr->sound();

    animalPtr = &cat;
    animalPtr->sound();

    return 0;
}