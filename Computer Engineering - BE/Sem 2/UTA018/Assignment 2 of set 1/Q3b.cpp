#include <iostream>
using namespace std;

int x = 1;

int main()
{
  int x = 10;
  cout << "Value of global x is " << ::x;
  cout << "\nValue of local x is " << x;
  return 0;
}