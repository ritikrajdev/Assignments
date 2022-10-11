#include<iostream>
using namespace std;
 
int main()
{
    int n,a[10][10],indeg[10],flag[10],count=0;
    cout << "Enter the no of vertices:\n";
    cin >> n;
    cout << "Enter the adjacency matrix:\n";
    for(int i=0;i<n;i++)
    {
        cout << "Enter row "<<i+1<<"\n";
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        indeg[i]=0;
        flag[i]=0;
    }
    for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                indeg[i]=indeg[i]+a[j][i];
    cout << "\nThe topological order is:";
    while(count<n)
    {
        for(int k=0;k<n;k++)
        {
            if((indeg[k]==0) && (flag[k]==0))
            {
                cout << k << " ";
                flag[k] = 1;
            }
            for(int i=0;i<n;i++)
            {
                if(a[i][k]==1)
                    indeg[k]--;
            }
        }
        count++;
    }
    return 0;
}