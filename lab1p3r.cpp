#include <iostream>
using namespace std;
int bin(int arr[],int l,int low , int high , int target)
{
	int mid = (low + high)/2;
	if (low >= high)
		return 0;
	else if (arr[mid] == target)
		return 1;
	else if (target > arr[mid])
	{
		bin(arr,l,mid +1,high,target);
	}
	else if (target < arr[mid])
		bin(arr,l,0,mid - 1, target);	
}

int main()
{
	int arr[10] , num , target;
	cout << "\nEnter the number of elements in the array: ";
	cin >> num;
	cout << "\nEnter the elements in the array: ";
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	cout << "\nEnter the target element: ";
	cin >> target;
	int flag = bin(arr,num,0,num-1,target);
	if (flag == 1)
		cout << "\nElement found!\n";
	else cout << "\nNot found!\n";
	return 0;
}
