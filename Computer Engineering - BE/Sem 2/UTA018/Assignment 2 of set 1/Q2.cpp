#include <iostream>
using namespace std;
class Complex
{
public:
    float real;
    float imaginary;

    void setComplex(float a, float b)
    {
        real = a;
        imaginary = b;
    }

    void displayComplex()
    {
        cout << real << "+" << imaginary << "i" << endl;
    }

    void sumComplex(Complex o1, Complex o2)
    {

        real = o1.real + o2.real;
        imaginary = o1.imaginary + o2.imaginary;
    }
};

int main()
{
    Complex obj;
    float r, i;
    cout << "Enter real part of first number" << endl;
    cin >> r;
    cout << "Enter imaginary part of first number" << endl;
    cin >> i;
    obj.setComplex(r, i);
    obj.displayComplex();

    Complex obj2;
    float r2, i2;
    cout << "Enter real part of second number" << endl;
    cin >> r2;
    cout << "Enter imaginary part of second number" << endl;
    cin >> i2;
    obj2.setComplex(r2, i2);
    obj2.displayComplex();

    Complex R;
    R.sumComplex(obj, obj2);
    cout << "The sum is :  ";
    R.displayComplex();

    return 0;
}