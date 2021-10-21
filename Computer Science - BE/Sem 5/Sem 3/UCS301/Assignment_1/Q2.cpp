#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the elements of the array "<<endl;
    for(int i=0;i<n; i++)
    {
        cin>>array[i];
    }
    for(int i=0; i<n; i++)
    {
        int num = array[i];
       for(int j=i+1; j<n; j++)
       {
           if(num == array[j])
           {
               while(j<n)
               {
                   array[j-1] = array[j];
                   j++;
               }
               n--;
           }
       }
    }
cout<<"Final Array: "<<endl;
for(int i=0; i<n; i++)
{
    cout<<array[i]<<" ";
}
return 0;
}
