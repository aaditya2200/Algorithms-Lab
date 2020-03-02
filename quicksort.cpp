#include <iostream>
#define MAX 50
using namespace std;
int i,j;

void swap(int *a,int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[],int l,int h)
{
	int pivot = arr[h];
	int i = l-1;
	for (j = l; j < h; j++)
	{
	 	if (arr[j] <= pivot)
	 	{
	 		i++;
	 		swap(&arr[j],&arr[i]);
	 	}
	}
	swap(&arr[i+1],&arr[h]);
	return i+1;	
}




void quicksort(int arr[],int l,int h)
{
	if (l < h)
	{
		int pi = partition(arr,l,h);
		quicksort(arr,l,pi-1);
		quicksort(arr,pi,h);
	}
}



int main()
{
	int n;
	int arr[MAX];
	cout << "\nEnter the number of elements (max 50): ";
	cin >> n;
	int s = n;
	cout << "\nEnter the elements in the array: ";
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	quicksort(arr,0,s-1);
	cout << "abcd " << n;
	cout << "\nThe sorted array is: ";
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
