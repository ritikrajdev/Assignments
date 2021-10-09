//dynamic memory allocation
#include<iostream>
using namespace std;
class world
{
	int*d;   //pointer variable
	public:
    world()
	{
		d=new int[5];
	}
	void getdata()
	{
		int i;
		for(i=0;i<5;i++)
		{
			cin>>d[i];
		}
	}
	void display()
	{
		int i;
		for(i=0;i<5;i++)
		{
			cout<<"i="<<"d="<<d[i]<<endl;
		}
	}
  ~world()    //destructor
	{
		delete[] d;
		cout<<"done";   //de-allocating memory
	}
};
int main()
{
	world d;
	d.getdata();
	d.display();
	
	return 0;
}
