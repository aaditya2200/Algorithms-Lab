#include <iostream>
#define MAX 50
using namespace std;
int i,j;
void merge(int a[],int l, int m,int h)
{
	int s1 = m-l+1;
	int s2 = h-m;
	int a1[s1],a2[s2];
	for (i = 0; i < s1; i++)
	{
		a1[i] = a[l+i];
	}
	for (j = 0; j < s2; j++)
	{
		a2[j] = a[m+j+1];
	}
	i=0;j=0;
	int k1 = l;
	while (i < s1 && j < s2)
	{
		if (a1[i] <= a2[j])
		{
			a[k1++] = a1[i];
			i++;
		}
		else if (a2[j] < a1[i])
		{
			a[k1++] = a2[j];
			j++;
		}
	}

	while (i < s1)
	{
		a[k1++] = a1[i++];
	}
	while (j < s2)
	{
		a[k1++] = a2[j++];
	}
}

void mergesort(int a[],int l,int h)
{
	if (l < h)
	{
		int m = (l+h)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,h);
		merge(a,l,m,h);
	}
}


int main()
{
	int n;
	int arr[MAX];
	cout << "\nEnter the size of the array (max 50): ";
	cin >> n;
	cout << "\nEnter the elements in the array: ";
	for (i = 0; i < n; i++)
		cin >> arr[i];
	mergesort(arr,0,n-1);
	cout << "\nThe sorted array is: ";
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
