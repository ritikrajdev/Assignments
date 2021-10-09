#include <iostream>
using namespace std;

class Base
{
private:
    int pvt = 1;

protected:
    int prot = 2;

public:
    int pub = 3;

    int getPVT()
    {
        return pvt;
    }
};

class PrivateDerived : private Base
{
public:
    int getProt()
    {
        return prot;
    }

    int getPub()
    {
        return pub;
    }
};

int main()
{
    PrivateDerived object1;
    cout << "Private cannot be accessed." << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.getPub() << endl;
    return 0;
}