#include<iostream>
using namespace std;

void sortArray(int arr[],int n){
    for(int j=0;j<n;j++){
        for(int k=0;k<n-1;k++){
            if(arr[k]>arr[k+1])
            {
                int temp;
                temp = arr[k+1];
                arr[k+1]=arr[k];
                arr[k]=temp;
            }
        }
    }
    cout<<"Sorted Array is"<<endl;
    for(int y=0;y<n;y++){
        cout<<arr[y]<<endl;
    }
    cout<<endl;
}
void deleteElement(int arr[],int n){
    int arr1[n];
    int j=0;
    int num;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i-1]){}
        else{
            arr1[j]=arr[i];
            j++;
        }
    }
    cout<<"Final array is:"<<endl;
    for(int i=0;i<j;i++){
        cout<<arr1[i]<<endl;
    }
}
int main(){
    int i,n,arr[n];
    cout<<"Enter the size of sorted array"<<endl;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    for(i=0;i<n;i++){
    cin>>arr[i];
    }
    sortArray(arr,n);
    deleteElement(arr,n);
    return 0;
}