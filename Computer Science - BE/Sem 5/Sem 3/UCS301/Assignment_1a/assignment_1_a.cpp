#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of the matrix row "<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the row majors now "<<endl;
    for(int i=0; i<n; i++) {
        cin>>array[i];
    }
    cout<<"The Diagnol Matrix is "<<endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i==j) {
                cout<<array[i];
            }
            else {
                cout<< 0;
            }
        }
        cout<<endl;
    }
    return 0;
}