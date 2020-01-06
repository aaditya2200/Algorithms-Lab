#include <iostream>
using namespace std;
void bubble(int arr[] , int num)
{
	if (num == 1)
		return;
	for (int j = 0; j < num - 1; j++)
	{
		if (arr[j] > arr[j+1])
		{
			int temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
		}
	}
	bubble(arr,num - 1);
}

int main()
{
	int arr[10],num;
	cout << "\nEnter the number of elements: ";
	cin >> num;
	cout << "\nEnter the elements in the array: ";
	for (int i = 0; i < num ; i++)
	{
		cin >> arr[i];
	}
	bubble(arr,num);
	cout << "\nThe sorted array is: ";
	for (int j = 0; j < num; j++)
		cout << arr[j] << " ";
	cout << endl;
	return 0;
}
