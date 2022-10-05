// Recursive Binary Search
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int left, int right, int element)
{
	if (right >= left) {
		int mid = left + (right - left) / 2;

		if (arr[mid] == element)
			return mid;

		if (arr[mid] > element)
			return binarySearch(arr, left, mid - 1, element);

		return binarySearch(arr, mid + 1, right, element);
	}
	return -1;
}

int main()
{
	int n;
	cout << "Enter the number of elements in the array\n";
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
