//friend function and class
#include<iostream>
using namespace std;
class B;  //declared class B
class A
{
	int a;
	public:
		A()
		{
			a=20;
		}
	friend class B;	 //called;friend of class A
};

class B  //defined class B
{
	int b;
	public:
		B()
		{
			b=10;
		}
	void display(A aa)
	{
		cout<<aa.a<<endl;   //a is private data of class A
		cout<<b<<endl;
	}	
};
int main()
{
	A a1;
	B b1;
	b1.display(a1);
	return 0;
}
