#include <iostream>
using namespace std;
int i,j;

int getMax(int arr[], int n) 
{ 
    int mx = arr[0]; 
    for (int i = 1; i < n; i++) 
        if (arr[i] > mx) 
            mx = arr[i]; 
    return mx; 
} 


void countSort(int arr[], int n, int exp) 
{ 
    int output[n]; // output array 
    int i, count[10] = {0}; 
    for (i = 0; i < n; i++) 
        count[ (arr[i]/exp)%10 ]++; 
    for (i = 1; i < 10; i++) 
        count[i] += count[i - 1]; 
    for (i = n - 1; i >= 0; i--) 
    { 
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i]; 
        count[ (arr[i]/exp)%10 ]--; 
    } 
    for (i = 0; i < n; i++) 
        arr[i] = output[i]; 
} 

void radixsort(int arr[], int n) 
{
    int m = getMax(arr, n); 
    for (int exp = 1; m/exp > 0; exp *= 10) 
        countSort(arr, n, exp); 
} 

int main()
{
	int n,index = 0;
	cout << "\nEnter the number of characters: ";
	cin >> n;
	int f[n],arr[n];
	cout << "\nEnter frequency of these characters: ";
	for (i = 0; i < n; i++)
	{
		cin >> f[i];
	}
	//performing operation
	int j = 0;
	int i =0;
	while(j<n-1)
	{
		f[i+1] = f[i+1] + f[i];
		arr[index++] = f[i+1];
		for (int k = 1; k < n; k++)
			f[k-1] = f[k];
		n--;
		radixsort(f,n);
	}
	cout << "\nArray: ";
	for (i = 0; i < n; i++)
	{
		cout << f[i] << " ";
	}
	for (j = 0; j < index; j++)
		cout << arr[i] << " ";
	return 0;
}
