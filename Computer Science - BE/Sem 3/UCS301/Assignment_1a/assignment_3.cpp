#include <iostream>
using namespace std;
int main() {
    int n,m,sum = 0;
    cout<<"Enter the no of rows of the matrix "<<endl;
    cin>>n;
    cout<<"Enter the no of columns of the matrix "<<endl;
    cin>>m;
    int array[n][m];
    cout<<"Enter the elements of the array "<<endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>array[i][j];
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
          sum = sum + array[i][j];
    }
    cout<<"The sum of "<< i <<" row = "<<sum<<endl;
    sum =0;
}
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            sum = sum + array[j][i];
        }
    cout<<"The sum of "<< i <<" column = "<<sum<<endl;
    sum = 0;
    }
    return 0;
}
