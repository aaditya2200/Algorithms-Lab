#include <iostream>
using namespace std;

void sel(int arr[] , int size, int i)
{
	int k = i;
	if (size == 1)
		return;
	for (int j = i+1; j < size; j++)
	{
		if (arr[j] < arr[k])
			k = j;
	}
	if (i != k)
	{
		int temp = arr[i];
		arr[i] = arr[k];
		arr[k] = temp;
	}
	sel(arr,size-1,i+1);
}

int main()
{
	int arr[10],num;
	cout << "\nEnter the number of elements: ";
	cin >> num;
	cout << "\nEnter the elements in the array: ";
	for (int i = 0; i < num; i++)
		cin >> arr[i];
	sel(arr,num,0);
	cout << "\nThe sorted array is: ";
	for (int j = 0; j < num; j++)
		cout << arr[j] << " ";
	cout << endl;
	return 0;
}
