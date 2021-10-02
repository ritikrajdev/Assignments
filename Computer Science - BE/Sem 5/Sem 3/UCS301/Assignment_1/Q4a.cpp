#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array "<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the elements of the array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"Array before reversing: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"Array after reversing: "<<endl;
    for(int i=n-1;i>=0; i--)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}