#include <iostream>
using namespace std;

int main()
{
    //if statement
    int i = 10;

    if (i > 15)
    {
        cout << "10 is less than 15";
    }

    //if else
    int j = 20;

    if (j < 15)
        printf("j is smaller than 15");
    else
        printf("j is greater than 15");


    //if else if ladder
    int k = 20;

    if (k == 10)
        printf("k is 10");
    else if (k == 15)
        printf("k is 15");
    else if (k == 20)
        printf("k is 20");
    else
        printf("k is not present");


    //switch case
    int x = 2;
    switch (x)
    {
    case 1:
        cout << "Choice is 1";
        break;
    case 2:
        cout << "Choice is 2";
        break;
    case 3:
        cout << "Choice is 3";
        break;
    default:
        cout << "Choice other than 1, 2 and 3";
        break;
    }
}