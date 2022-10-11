#include <iostream>
using namespace std;

void printActivities (int start[], int finish[], int n)
{
    for (int i=0;i<n;i++)
    {
        cout << "Activities selected are: \n";
        cout << "Activity " << i+1 << endl;
        int k = i;
        for (int j=0;j<n;j++)
        {
            if(finish[k]<=start[j])
            {
                cout << "Activity " << j+1 << endl;
                k = j;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter number of activities: \n";
    cin >> n;
    int start[n];
    int finish[n];
    cout << "Enter start time: \n";
    for (int i=0;i<n;i++)
    {
        cout << "Activity " << i+1 << ": ";
        cin >> start[i];
    }
    cout << "Enter finish time: \n";
    for (int i=0;i<n;i++)
    {
        cout << "Activity " << i+1 << ": ";
        cin >> finish[i];
    }
    printActivities(start, finish, n);
    return 0;
}