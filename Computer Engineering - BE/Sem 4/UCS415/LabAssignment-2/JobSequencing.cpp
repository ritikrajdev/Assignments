#include <iostream>
#include <algorithm>
using namespace std;

struct Job
{
    char id;	 
    int dead; 
    int profit;
};

bool comparison(Job a, Job b)
{
	return (a.profit > b.profit);
}

void printJobScheduling(Job arr[], int n)
{
	sort(arr, arr+n, comparison);

	int result[n];
	bool slot[n];

	for (int i=0; i<n; i++)
		slot[i] = false;

	for (int i=0; i<n; i++)
	{
        for (int j=min(n, arr[i].dead)-1; j>=0; j--)
        {
            if (slot[j]==false)
            {
                result[j] = i;
                slot[j] = true; 
                break;
            }
        }
	}
	for (int i=0; i<n; i++)
	if (slot[i])
		cout << arr[result[i]].id << " ";
}

int main()
{
	int n;
    cout << "Enter number of jobs: \n";
    cin >> n;
    Job arr[n];
    for(int i=0;i<n;i++)
    {
        cout << "Job " << i+1 << ": ";
        cin >> arr[i].id;
        cin >> arr[i].dead;
        cin >> arr[i].profit;
    }
	cout << "Following is maximum profit sequence of jobs \n";
	printJobScheduling(arr, n);
    cout << endl;
	return 0;
}
