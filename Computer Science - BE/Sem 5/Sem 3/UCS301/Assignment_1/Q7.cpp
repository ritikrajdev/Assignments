#include <iostream>
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
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[j] < array[i])
            {
                int temp;
                temp = array[j];
                array[j] = array[i];
                array[i] = array[j];
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        if(array[i+1] - array[i] == 2)
        {
            cout<<"The missing element of the sorted array is "<<array[i+1] - 1<<endl;
        }
    }
    return 0;
}


