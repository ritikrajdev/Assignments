#include <iostream>
using namespace std;
int main() {
    int n,m,k;
    cout<<"Enter the no of rows in the 2-D matrix "<<endl;
    cin>>n;
    cout<<"Enter the no of columns in the 2-D array "<<endl;
    cin>>m;
    int array[n][m];
    cout<<"Enter the elements of the 2-D array: "<<endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>array[i][j];
        }
    }
    
    for(int i=0; i<n; i++) {

        int row_min = array[i][0], col_index = 0;
        for(int j=1; j<n; j++) {

            if(row_min > array[i][j]) {

                row_min = array[i][j];
                col_index = j;
            }
        }

        for(k=0; k<n; k++) {
            if(row_min < array[k][col_index]){
                break;
            }
        }
        if(k == n) {
            cout<<"The saddle point if found at "<<row_min<<endl;
        }
    }
        cout<<"Saddle point is not found in the 2-D array "<<endl;
   return 0;
}