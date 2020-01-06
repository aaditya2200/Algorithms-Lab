#include <iostream>
using namespace std;
int main()
{
	int target,arr[10],num,flag = 0;
	cout << "\nEnter the number of terms in the array (max 10)";
	cin >> num;
	cout << "\nEnter the elements into the array: ";
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	cout << "\nEnter the element to be found: ";
	cin >> target;
	for (int j = 0; j < num; j++)
	{
		if (arr[j] == target)
		{
			flag = 1;
			break;
		}
		else continue;
	}
	if (flag == 1)
		cout << "\nElement found!\n";
	else
		cout << "\nNot found!\n";
	return 0;
}
