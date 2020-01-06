#include <iostream>
using namespace std;
int main()
{
	int i,j;
	int arr[10],num,temp;
	cout << "\nEnter the number of elements in the array (max 10): ";
	cin >> num;
	cout << "\nEnter the elements in the array: ";
	for (i = 0; i < num; i++)
	{	
		cin >> arr[i];
	}
	//bubble sort
	for (i = 0; i < num - 1; i++)
	{
		for (j = 0; j < num -1 -i; j++)
		{
			if (arr[j] < arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	cout << "\nThe sorted array is: ";
	for (i = 0; i < num; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
	
}
