 
#include<iostream>
using namespace std;
 
class Date
{
    private:
        short int dd, mm, yy;
 
    public:
        Date() //constrctor:
            {
                dd = mm = yy = 0;
            }
 
        void getdata(int i, int j, int k) 
            {
                dd = i;
                mm = j;
                yy = k;
            }
 
 
        void prndata(void)
            {
                cout<<"\nData is "<<dd<<"/"<<mm<<"/"<<yy<<"\n";
            }
};
 
int main()
{
    Date D1; //simple object having type Data: 
    Date *dptr; //Pointer Object having type Date:
 
    cout<<"Initializing data members using the object, with values 19, 10, 2016"<<endl;
    D1.getdata(19,10,2016);
 
    cout<<"Printing members using the object ";
    D1.prndata();
 
    dptr = &D1;
    cout<<"Printing members using the object pointer ";
    dptr->prndata();
 
    cout<<"\nInitializing data members using the object pointer, with values 20, 10, 2016"<<endl;
    dptr->getdata(20, 10, 2016);
    cout<<"printing members using the object ";
    D1.prndata();
 
    cout<<"Printing members using the object pointer ";
    dptr->prndata();
 
    return 0;
}

