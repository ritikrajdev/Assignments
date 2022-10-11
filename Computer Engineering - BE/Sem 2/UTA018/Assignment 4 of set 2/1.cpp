#include <iostream>
using namespace std;

class rec
{
private:
    int I;
    int b;

public:
    rec(int a, int c)
    {
        I = a;
        b = c;
    }
    void put()
    {
        cout << "Area is : " << I * b << endl;
    }
};
int main()
{
    rec obj[3] = {rec(3, 6), rec(2, 5), rec(5, 5)};
    cout << "Displaying Areas of Rectangles : \n";
    for (int i = 0; i < 3; i++)
        obj[i].put();

    return 0;
}