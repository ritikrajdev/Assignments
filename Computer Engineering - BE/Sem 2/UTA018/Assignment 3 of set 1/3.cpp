#include <iostream>
using namespace std;

int main()
{
    float c, f;

    cout << "Enter celsius degree to find temperature in fahreheit: ";
    cin >> c;
    f = c*1.8 + 32;
    cout << "Fahreheit= " << f;
    return 0;
}