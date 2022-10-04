// Recursive Merge Sort
#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int left, int mid, int right);

void mergeSort(int arr[], int left, int right)
{
	if (left < right)
	{
		int mid = left + (right - left) / 2;
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}

void merge(int arr[], int left, int mid, int right)
{
	int k;
	int n1 = mid - left + 1;
	int n2 = right - mid;

	int L[n1], R[n2];

	for(int i = 0; i < n1; i++)
		L[i] = arr[left + i];
	for(int j = 0; j < n2; j++)
		R[j] = arr[mid + 1+ j];

	int i = 0;
	int j = 0;
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
	for(int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
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
	cout << "Given array is \n";
	printArray(arr, n);
	mergeSort(arr, 0, n - 1);
	cout << "Sorted array is \n";
	printArray(arr, n);
	return 0;
}