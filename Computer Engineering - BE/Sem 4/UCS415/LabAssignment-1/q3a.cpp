//Recursive QuickSort
#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[], int low, int high)
{
	int x = arr[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++) {
		if (arr[j] <= x) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quickSort(int A[], int low, int high)
{
	if (low < high) {
		int p = partition(A, low, high);
		quickSort(A, low, p - 1);
		quickSort(A, p + 1, high);
	}
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
	quickSort(arr, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
    cout << endl;
	return 0;
}
