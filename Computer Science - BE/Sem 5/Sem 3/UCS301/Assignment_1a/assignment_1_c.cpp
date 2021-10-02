#include <iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    int array[n][n];
    cout<<"Enter the elements of the array "<<endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i<j) {
                array[i][j] = 0;
            }
            else {
                cin>>array[i][j];
            }
        }
    }
    cout<<"The Lower triangular matrix is "<<endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}