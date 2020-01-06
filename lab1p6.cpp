#include <iostream>
using namespace std;
int main()
{
	int i,j;
	int arr[10],num,max;
	cout << "\nEnter the number of elements in the array (max 10): ";
	cin >> num;
	cout << "\nEnter the elements in the array: ";
	for (i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	//insrt. sort
	for (int i = 1; i < num; i++)
	{	
		max = arr[i];
		j = i-1;
		while (j >= 0 && arr[j] > max)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = max;
	}
	cout << "\nThe sorted array is: ";
	for (i = 0; i < num; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}
