#include <iostream>
using namespace std;
class Demo
{
    int X,Y;
    public:
        Demo()
        {
                X = 0;
                Y = 0;
                 
                cout << endl << "Constructor Called";
        }
        Demo(int X, int Y=20) //Perameterized constructor with default argument.
        {
            this->X = X;
            this->Y = Y;
            cout<<"Constructor Called"<<endl;
        }
    ~Demo()  //destructor
        {
            cout<< "Destructor Called" << endl;
        }
    void putValues()
        {
          cout<<"Value of X : " <<X<<endl;
          cout<<"Value of Y : " <<Y<<endl;
        }
};
int main()
{
    Demo d1= Demo(10);  
    cout<<endl<<"D1 Value Are : ";
    d1.putValues();
     
    Demo d2= Demo(30,40);
    cout<<endl<<"D2 Value Are : ";
    d2.putValues();
     
    return 0;
}
