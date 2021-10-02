#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
            break;
            }
            else{
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;

            }

        }

    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    
}