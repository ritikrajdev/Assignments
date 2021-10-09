#include <iostream>
#include <cmath>
using namespace std;
float area(float a)
{
    float eq;
    eq = (sqrt(3)/4 * a*a);
    return eq;
}
float area(float b, float h)
{
    return (b * h * 0.5);
}
int area(int a, int b)
{
    return (0.5 * b * (sqrt(a * a - ((b * b) / 4))));
}
int main()
{
    float b, h,s;
    int p, q;
    //area of right angle triangle
    cout << "\nTo find area of right angle triangle" << endl;
    cout << "Base :" << endl;
    cin >> b;
    cout << "Height :" << endl;
    cin >> h;
    cout << "area of right angle triangle :" << area(b, h) << endl;
    //area of isosceles triangle
    cout << "\nTo find area of isosceles triangle" << endl;
    cout << "length  of each equal side:" << endl;
    cin >> p;
    cout << "Length of unequal side :" << endl;
    cin >> q;
    cout << "area of isosceles triangle :" << area(p, q) << endl;
    //area of equilateral triangle
    cout << "\nTo find area of equilateral triangle" << endl;
    cout << "length of each side of equilateral triangle :" << endl;
    cin >> s;
    cout << "area of equilateral triangle :" << area(s) << endl;

    return 0;
}