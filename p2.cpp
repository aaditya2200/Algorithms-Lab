#include <iostream>
using namespace std;
int i,j;
int stepcount = 0;
int returnMAX(int p[],int l,int k)
{
	
	int max = 0;stepcount++;
	//finding max profit item index
	for (i = k; i < l; i++)
	{
		stepcount++;
		stepcount++;
		if (p[i] > p[max])
		{	stepcount++;
			max = i;
			stepcount++;
		}
	}stepcount++;
	stepcount++;
	return max;
		
}
//greedy on profit knapsack
void knapsack(int p[],int w[],int capacity,int l)
{
	int index;
	int x[l];
	for (i = 0; i < l; i++)
		{stepcount++;
		x[i] = 0;
		stepcount++;}
	stepcount++;
	for (j = 0; j < l && capacity > 0; j++)
	{
		stepcount++;
		index = returnMAX(p,l,j);stepcount++;
		stepcount++;
		if (w[index] <= capacity)
		{	stepcount++;	
			x[index] = 1;stepcount++;
			capacity -= w[index];stepcount++;
		}
		else continue;
	}stepcount++;
 	cout << "\nThe obtained solution (feasible) is: ";stepcount++;
 	for (i = 0; i < l; i++)
 	{	stepcount++;
 		cout << x[i] << " ";
 		stepcount++;
 	}
 	stepcount++;
}


int main()
{
	int p[20],w[20],l,capacity;
	cout << "\nEnter the number of items: ";stepcount++;
	cin >> l;stepcount++;
	cout << "\nEnter the weight of these items: ";stepcount++;
	for (i = 0; i < l; i++)
	{	stepcount++;
		cin >> w[i];
	}stepcount++;
	cout << "\nEnter individual profit: ";stepcount++;
	for (j = 0; j < l; j++)
	{	stepcount++;
		cin >> p[i];
		stepcount++;
	}stepcount++;
	cout << "\nEnter capacity of the knapsack: ";stepcount++;
	cin >> capacity;stepcount++;
	knapsack(p,w,capacity,l);stepcount++;
	stepcount++;
	return stepcount;
}
