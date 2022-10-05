// Iterative Binary Search
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int left, int right, int element)
{
	while (left <= right) {
		int m = left + (right - left) / 2;

		if (arr[m] == element)
			return m;

		if (arr[m] < element)
			left = m + 1;

		else
			right = m - 1;
	}

	return -1;
}

int main(void)
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
	int element;
	cout << "Enter the element to be searched: ";
	cin >> element;
	int result = binarySearch(arr, 0, n - 1, element);
	(result == -1)
		? cout << "Element is not in the array"
		: cout << "Element is at index " << result << endl;
	return 0;
}
