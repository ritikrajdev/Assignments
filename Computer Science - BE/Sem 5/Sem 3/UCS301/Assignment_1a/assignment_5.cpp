#include <iostream>
using namespace std;
int main(){
  int m,n;
  cout<<"Enter the number of rows "<<endl;
  cin>>m;
  cout<<"Enter the number of columns "<<endl;
  cin>>n;
  int array[n][m];
  cout<<"Enter the elements of the array "<<endl;
  for(int i=0; i<n; i++) {
      for(int j=0; j<m; j++) {
          cin>>array[i][j];
      }
  }
  // spiral order print

  int row_start = 0, row_end = n-1, column_start = 0, column_end = m-1;
  while(row_start <= row_end && column_start<= column_end) {

      // for row start
    for(int col = column_start; col<=column_end; col++) {
        cout<< array[row_start][col]<<" ";
    }
    
    row_start++;

     // for column end
    for(int row = row_start; row<=row_end; row++) {
        cout<< array[row][column_end]<<" ";
    }
    column_end--;
    
    // for row end
    for(int col= column_end; col>=column_start; col--) {
        cout<< array[row_end][col]<<" ";
    }
    row_end--;

    //for column start
    for(int row=row_end; row>=row_start; row--) {
        cout<< array[row][column_start]<<" ";
    }
    column_start++;
  }
  return 0;
}