#include <iostream>
using namespace std;
int main() {
    int n,k=0;
    cout<<"Enter the diagnols "<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the elements of the diagnol "<<endl;
    for(int i=0; i<n; i++) {
        cin>>array[i];
    }
    cout<<"The tridiagnol matrix is: "<<endl;
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            if(i == j || i-j == 1 || i-j == -1) {
                cout<<array[k];
                k++;
            }
            else {
                cout<<0;
            }
        }
        cout<<endl;
    }
    return 0;
}