#include <iostream>
using namespace std;
int i,j;
int stepcount=0;
class Container
{
public:
int weight,id;
}c[20];
void insSort(Container c[],int l)
{
	Container temp;
	for (i = 1; i < l; i++)
	{
		stepcount++;
		j = i-1;stepcount++;
		temp = c[i];stepcount++;
		//int k = c[i].id;
		while (j >= 0 && c[j].weight > temp.weight)
		{
			stepcount++;
			c[j-1] = c[j];stepcount++;
			//c[j-1].id = c[j].id;
			j--;stepcount++;
		}
		stepcount++;
		c[j+1] = temp;stepcount++;
		//c[j+1].id = k;
	}
	stepcount++;
}
void container(Container c[],int capacity,int l)
{
	insSort(c,l);stepcount++;
	int x[l];
	for (i = 0; i < l; i++)
	{
		stepcount++;
		x[i] = 0;
		stepcount++;
	}
	stepcount++;
	for (i = 0; i < l; i++)
	{
		stepcount++;
		stepcount++;
		if (c[i].weight <= capacity)
		{
			stepcount++;
			x[c[i].id] = 1;stepcount++;
			capacity -= c[i].weight;stepcount++;
		}
		//else x[i] = 0;		
	}
	cout << "\nThe optimal solution is: ";
	for (i = 0; i < l; i++)
	{stepcount++;
		cout << x[i] << " ";
		stepcount++;}
	stepcount++;
}

int main()
{
	int capacity,n;
	cout << "\nEnter the capacity of the ship: ";stepcount++;
	cin >> capacity;stepcount++;
	cout << "\nEnter the number of containers: ";stepcount++;
	cin >> n;stepcount++;
	cout << "\nEnter the weight of the individual containers: ";stepcount++;
	for (i = 0; i < n; i++)
	{
		stepcount++;
		cout << "\nEnter weight: ";stepcount++;
		cin >> c[i].weight;stepcount++;
		cout << "\nEnter id: ";stepcount++;
		cin >> c[i].id;
		stepcount++;
	}
	stepcount++;
	container(c,capacity,n);stepcount++;
	stepcount++;
	return stepcount;
}
