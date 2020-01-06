#include <iostream>
using namespace std;
int lsearch(int arr[] , int l , int t)
{
	if (l == 0)
		return 0;
	else if (arr[l-1] == t)
		return 1;
	lsearch(arr,l-1,t);
		
}

int main()
{
	int arr[10] , num , target;
	cout << "\nEnter the number of elements in the array (max 10): ";
	cin >> num;
	cout << "\nEnter the elements in the array: ";
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	cout << "\nEnter the target element: ";
	cin >> target;
	int flag = lsearch(arr,num,target);
	if (flag == 1)
	{
		cout << "\nElement found!\n";
	}
	else cout << "\nNot found!\n";
	return 0;
}
