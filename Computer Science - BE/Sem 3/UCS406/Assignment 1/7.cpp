#include <iostream>
using namespace std;
 
int main() {
	int n;
	cout<<"Enter length of array";
	cin>>n;
	int arr[n];
	cout<< "Enter array elements";
	for(int i=0;i<n;i++)
	cin>> arr[i];
 
int mid,beg=0,end=n-1; 
		while(beg!=end-1)
		{
			mid=(beg+end)/2;
			if(arr[mid]== arr[0]+mid)
			beg=mid;
			else 
			end=mid;
		}
		if(arr[beg]==arr[0]+beg)
		cout<< arr[beg]+1;
		else 
		cout<<arr[end]-1;
 
	return 0;
}