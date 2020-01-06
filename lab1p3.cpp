#include <iostream>
using namespace std;
int main()
{
	int target,arr[10],num,flag = 0;
	int l = 0 , h = 0 , mid;
	cout << "\nEnter the number of elements in  the array (max 10): ";
	cin >> num;
	h = num-1;
	cout << "\nENter the elements in the array: ";
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	cout << "\nEnter the target element: ";
	cin >> target;
	//bin search
	mid = (l + h)/2;
	while (l < h) 
	{
		if (arr[mid] == target)
		{
			flag = 1;
			break;
		}
		else if (target < arr[mid])
		{
			h = mid - 1;
			mid = (l + h)/2;
		}
		else if (target > arr[mid])
		{
			l = mid + 1;
			mid = (l + h)/2;
		}
	}
	if (flag == 1)
	{
		cout << "\nElement found!\n";
	}
	else cout << "\nNot found!\n";
	return 0;
}
