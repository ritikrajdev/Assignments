#include <iostream>
using namespace std;

int main()
{
int x = -1;


try {
	if (x < 0)
	{
        cout<<"Yes "<<x<<" is less than 0"<<endl;
		throw x;
	}
}
catch (int x ) {
	cout << "Exception Caught \n";
}
return 0;
}
