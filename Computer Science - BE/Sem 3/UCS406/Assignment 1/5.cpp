#include<iostream>
using namespace std;
int binarySearch( int arr[],int n, int element_to_be_searched){
    int s=0;
    int e=n;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==element_to_be_searched){
            return mid;
        }
        else if(arr[mid]>element_to_be_searched){
            e=mid-1;
        }
        else{
           s=mid+1;
        }
    }
    return -1;
}
int main(){
    int n,element_to_be_searched;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched"<<endl;
    cin>>element_to_be_searched;

    cout<<binarySearch(arr, n, element_to_be_searched);
    
}