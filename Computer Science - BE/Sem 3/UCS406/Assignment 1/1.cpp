#include <iostream>
using namespace std;
int num;
int arr[100];
void create()
{
    cout<<"Enter the size of an array :"<<endl;
	cin >> num;
	
    cout<<"Enter the elements of the array :"<<endl;
    for (int i=0; i<num; i++)
    {
        cin>>arr[i];
    }
}
void display()
{
    cout<<"Created Array is:"<<endl;
    for(int i=0; i<num; i++)
    {
        cout<< arr[i]<< " ";
    }                
    cout << endl;
}

void insert()
{
    int element, pos, i;

    cout << "Enter the element & the index it should be added at" << endl;
    cin >> element >> pos;
    num++;
    if(pos>num)
    {
        cout<<"Impossible! :)"<<endl;
    }
    else
    {
       for(i=num; i>pos; i--)
       {
            arr[i] = arr[i-1];
       }
       arr[i] = element;
       for(int i=0; i<num; i++)
       {
            cout<< arr[i]<< " ";
       }
        cout<< endl;
    }
}

void deleteit()
{
    int pos, i;

    cout << "Enter the index you want to delete" << endl;
    cin >> pos;
    if(pos>num)
    {
        cout<<"Impossible! :)"<<endl;
    }
    else
    {
        for(i=pos; i<num; i++)
        {
            arr[i]=arr[i+1];
        }
        num--;
        for(int i=0; i<num; i++)
        {
            cout<< "Array after deletion of element"<< arr[i]<< " ";
        }    
        cout << endl;   
    }
}

void search()
{
     int element;
     cout<< "Enter the element to be searched" <<endl;
     cin>> element;
     for(int i=0; i<num; i++)
     {
         if(arr[i]==element)
         {
             cout<< "The element " <<element <<" is at " <<i <<" index." <<endl;
         }
     }
}

int exit()
{
     int choice;
     cout << "Press 1 to continue, otherwise any number to exit!"<<endl;
     cin >> choice;
     return choice;
}

int main()
{   
    cout<<"Menu driven program to demonstrate the some operations of Arrays"<<endl;

	int n, choice=1;
	
	do{
        cout<<"Choose:"<<endl;
        cout<<"1 to Create"<<endl;        
        cout<<"2 to Display"<<endl;        
        cout<<"3 to Insert"<<endl;
        cout<<"4 to Delete"<<endl;
        cout<<"5 to Search"<<endl;
        cin>>n;

        switch(n)
        {
            case 1 : create();
            break;
            case 2 : display();
            break;
            case 3 : insert();
            break;
            case 4 : deleteit();
            break;
            case 5 : search();
            break;
            default: 
            choice=exit();
        } 
        if(choice!=1)
        {
            break;
        } 
    }while(1);

return 0;
}