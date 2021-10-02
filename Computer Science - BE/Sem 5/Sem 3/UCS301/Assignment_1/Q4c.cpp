#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n;
    cout<<"Enter the number of rows "<<endl;
    cin>>n;
    cout<<"enter the number of columns "<<endl;
    cin>>m;
    int array[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>array[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int temp = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<m;j++)
        {
          cout<<array[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}