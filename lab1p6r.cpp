#include <iostream>
using namespace std;
void inst(int arr[],int l , int i)
{
	if (l == 1)
		return;
	int min = arr[i];
	int j = i-1;
	while (j >= 0 && arr[j] > min)
	{
		arr[j+1] = arr[j];
		j--;
	}
	arr[j+1] = min;
	inst(arr,l-1,i+1);
}

int main()
{
	int arr[10],num;
	cout << "\nEnter the number of elements: ";
	cin >> num;
	cout << "\nEnter the elements: ";
	for (int i = 0; i < num; i++)
	{
		cin  >> arr[i];
	}
	inst(arr,num,1);
	cout << "\nThe sorted array is :";
	for (int j = 0; j < num; j++)
		cout << arr[j] << " ";
	cout << endl;
	return 0;	
}
