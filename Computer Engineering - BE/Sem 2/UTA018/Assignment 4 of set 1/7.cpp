//static data members
#include<iostream>
using namespace std;
class demo
{
	public:
		demo()     //default constructor
		{
			cout<<"I am a constructor"<<endl;
		}
	~demo()  //destructor
	{
		cout<<"I am a destructor"<<endl;
	}
	void display()
	{
		cout<<"hello";
	}
};
//independent function
void fun()        //not a member function of class demo
{
	static demo dd;        //creation of static object
	cout<<"I am function"<<endl;
}
int main()
{
	fun();
	cout<<"I am main"<<endl;
	return 0;
}
