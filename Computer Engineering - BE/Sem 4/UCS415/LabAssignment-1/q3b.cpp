//Iterative QuickSort
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

void quickSortIterative(int arr[], int low, int high)
{
	int stack[high - low + 1];
	int top = -1;
	stack[++top] = low;
	stack[++top] = high;
	while (top >= 0) {
		high = stack[top--];
		low = stack[top--];
		int p = partition(arr, low, high);
		if (p - 1 > low) {
			stack[++top] = low;
			stack[++top] = p - 1;
		}
		if (p + 1 < high) {
			stack[++top] = p + 1;
			stack[++top] = high;
		}
	}
}

void printArr(int arr[], int n)
{
	int i;
	for (i = 0; i < n; ++i)
    {
		cout << arr[i] << " ";
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
	quickSortIterative(arr, 0, n - 1);
	printArr(arr, n);
    cout << endl;
	return 0;
}