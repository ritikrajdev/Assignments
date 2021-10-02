#include<iostream>
using namespace std;
int binarysearch(int n, int array[], int key)
{
    int s =0;
    int e=n;
    while(s<=e)
    {
        int mid = (s+e)/2;

        if(array[mid] == key)
        {
            return mid;
        }
        else if(array[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of an array "<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the elements in an array "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    int key;
    cout<<"Enter the key to be searched "<<endl;
    cin>>key;
    cout<<binarysearch(n, array, key)<<endl;
}


