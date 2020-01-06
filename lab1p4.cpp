#include <iostream>
using namespace std;
int main()
{
	int i,j;
	int arr[10],num,temp,p;
	cout << "\nEnter the number of elements in the array (max 10): ";
	cin >> num;
	cout << "\nEnter the elements in the array: ";
	for (i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	//performing sel. sort
	for (i = 0; i < num; i++)
	{
		p = i;
		for (j = i + 1; j < num; j++)
		{
			if (arr[j] < arr[p])
			{
				p = j;
			}
		}
		if (i != p)
		{
			temp = arr[i];
			arr[i] = arr[p];
			arr[p] = temp;
		}
 
	}
	cout << "\nThe sorted array is: ";
	for (i = 0; i < num; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}
