#include <iostream>
using namespace std;

class Animal
{

public:
    void characteristics()
    {
        cout << "Characteristics of dog" << endl;
    }
    void eat()
    {
        cout << "Dog can eat!" << endl;
    }

    void sleep()
    {
        cout << "Dog can sleep!" << endl;
    }
};

class Dog : public Animal
{

public:
    void bark()
    {
        cout << "Dog can bark! Woof woof!!" << endl;
    }
};

int main()
{

    Dog dog1;
    Animal a;

    a.characteristics();
    dog1.eat();
    dog1.sleep();
    dog1.bark();

    return 0;
}