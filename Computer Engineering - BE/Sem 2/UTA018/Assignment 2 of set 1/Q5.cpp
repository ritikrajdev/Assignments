#include <iostream>

using namespace std;
class Line
{
public:
   void setLength(double len);
   double getLength(void);
   Line();
   ~Line();

private:
   double length;
};

Line::Line(void)
{
   cout << "Object is being created" << endl;
}
Line::~Line(void)
{
   cout << "Object is being deleted" << endl;
}
void Line::setLength(double len)
{
   length = len;
}
double Line::getLength(void)
{
   return length;
}

int main()
{
   Line line;

   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() << endl;

   return 0;
}