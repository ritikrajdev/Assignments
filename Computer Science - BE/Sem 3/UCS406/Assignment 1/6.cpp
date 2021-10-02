#include<iostream>
using namespace std;

int main(){
    int arr[7]={64,34,25,12,22,11,90};
    int i,j;
    for(i=0;i<6;i++){
     for(j=i+1;j<7;j++){
         if(arr[j]<arr[i]){
         int temp=arr[j];
         arr[j]=arr[i];
         arr[i]=temp;}

     }
    }
    int m;
    for(m=0;m<7;m++){
        cout<<arr[m]<<endl;
    }

}