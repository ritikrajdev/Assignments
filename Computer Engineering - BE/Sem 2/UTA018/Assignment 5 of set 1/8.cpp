#include <iostream>
using namespace std;

class Base
{
    int x;

public:
    virtual void fun() = 0;
    int getX() { return x; }
};
class Derived : public Base
{
    int y;

public:
    void fun() { cout << "fun() called"; }
};

int main(void)
{
    Derived d;
    d.fun();
    return 0;
}
