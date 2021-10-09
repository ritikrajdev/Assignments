#include<iostream>
using namespace std;

class Class
{
private:
	int x, y;
public:
	Class(int x1, int y1) { x = x1; y = y1; }

	// Copy constructor
	Class(const Class &p1) {x = p1.x; y = p1.y; }

	int getX()		 { return x; }
	int getY()		 { return y; }
};

int main()
{
	Class p1(10, 15); 
	Class p2 = p1; 

	
	cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
	cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY();

	return 0;
}
