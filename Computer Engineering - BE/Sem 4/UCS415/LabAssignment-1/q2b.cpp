// Iterative Merge Sort
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int left, int mid, int right);

int min(int x, int y) { return (x<y)? x :y; }

void mergeSort(int arr[], int n)
{
int curr_size; 
int left_start; 

for (curr_size=1; curr_size<=n-1; curr_size = 2*curr_size)
{
	for (left_start=0; left_start<n-1; left_start += 2*curr_size)
	{
		int mid = min(left_start + curr_size - 1, n-1);
		int right_end = min(left_start + 2*curr_size - 1, n-1);
		merge(arr, left_start, mid, right_end);
	}
}
}

void merge(int arr[], int left, int mid, int right)
{
	int i, j, k;
	int n1 = mid - left + 1;
	int n2 = right - mid;

	int L[n1], R[n2];

	for (i = 0; i < n1; i++)
		L[i] = arr[left + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[mid + 1+ j];

	i = 0;
	j = 0;
	k = left;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void printArray(int A[], int size)
{
	int i;
	for (i=0; i < size; i++)
    {
		cout << A[i] << " ";
    }
	cout << endl;
}

int main()
{
	int n;
	cout << "Enter the number of elements in tha array\n";
	cin >> n;
	int arr[n];
	cout << "Enter the elements in the array\n";
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	cout << "Given array is \n ";
	printArray(arr, n);
	mergeSort(arr, n);
	cout << "Sorted array is \n ";
	printArray(arr, n);
	return 0;
}