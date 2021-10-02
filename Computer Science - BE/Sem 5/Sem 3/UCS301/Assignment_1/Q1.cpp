#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    int a,b,c;
    int pos;
    int key;
    int array[100];
    int ch = 0;
    int flag = 0;
    int choice;
    while(true)
    {
        cout<<"--MENU--"<<endl;
        cout<<"1.CREATE"<<endl;
        cout<<"2.DISPLAY"<<endl;
        cout<<"3.INSERT"<<endl;
        cout<<"4.DELETE"<<endl;
        cout<<"5.SEARCH"<<endl;
        cout<<"6.EXIT"<<endl;
        cout<<"Enter Your choice "<<endl;
        cin>>choice;
        switch(choice)
        {


           case 1:
           {
           cout<<"Enter the size of an array "<<endl;
           cin>>n;
           cout<<"Enter the elements of the array "<<endl;
           for(int i=0; i<n; i++)
           {
               cin>>array[i];
           }
           break;
           }



           case 2:
           {
           cout<<"The Elements of the array are "<<endl;
           for(int i=0; i<n; i++)
           {
               cout<<array[i]<<" ";
           }
           cout<<endl;
           break;
           }



           case 3:
           {
           cout<<"REnter the element to be inserted "<<endl;
           cin>>a;
           cout<<"Enter the position at which element to be inserted "<<endl;
           cin>>b;
           for(int i = n; i>=b; i--)
           {
               array[i+1] = array[i];
           }
           array[b] = a;
           break;
           }


           case 4:
           {
           cout<<"Enter the position of the element to be deleted "<<endl;
           cin>>pos;
           while(pos-1<n)
           {
               array[pos-1] = array[pos];
               pos++;
           }
           n--;
           break;
           }

           case 5:
           {
           cout<<"Enter the element to be searched "<<endl;
           cin>>key;
           for(int i=0;i<n;i++)
           {
               if(array[i] == key)
               {
                   flag = 1;
                   c = i;
                   break;
               }
           }
           if(flag == 0)
           cout<<"Element not found "<<endl;
           else
           {
           cout<<"Element is found at index "<<c<<endl;
           }
           break;
           }

           case 6:
           {
               exit(0);
           }

           default:
           cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}

