#include <iostream>
using namespace std;
int main() {
    int n,m;
    bool flag = false;
    cout<<"Enter the no of rows in the array "<<endl;
    cin>>n;
    cout<<"Enter the no of columns in the array "<<endl;
    cin>>m;
    int array1[n][m];
    int array2[n][m];
    cout<<"Enter the elements of the array "<<endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>>array1[i][j];
        }
    }
     for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            array2[i][j] = array1[i][j];
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=i; j<m; j++) {
            int temp = array1[i][j];
            array1[i][j] = array1[j][i];
            array1[j][i] = temp;
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
           if(array1[i][j] != array2[i][j]) {
               flag = true;
               break;
           }
        }
    }
    if(flag) {
        cout<<"No It is not symmetric matrix";
    }
    else {
        cout<<"Yes it is symmetric matrix";
    }
}