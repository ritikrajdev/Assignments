#include <iostream>

using namespace std;

class base

{

public:
    base()

    {

        cout << "\nConstructor of base class...";
    }

    ~base()

    {

        cout << "\nDestructor of base class.... ";
    }
};

class derived : public base

{

public:
    derived()

    {

        cout << "\nConstructor of derived ...";
    }

    ~derived()

    {

        cout << "\nDestructor of derived ...";
    }
};

class derived1 : public derived

{

public:
    derived1()

    {

        cout << "\nConstructor of derived1 ...";
    }

    ~derived1()

    {

        cout << "\nDestructor of derived1 ...";
    }
};

int main()

{

    derived1 x;

    return 0;
}