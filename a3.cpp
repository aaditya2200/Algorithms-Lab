#include <iostream>
using namespace std;
int i,j;
class knapsack
{
public:
int w,p,v;
float density;
}k[20];

int returnMAX(knapsack k[],int l)
{
	
	int max = k[0].density;
	//finding max profit item index
	for (i = 0; i < l; i++)
	{
		if (k[i].density > max && k[i].v != 1)
		{
			k[i].v = 1;
			max = i;
	
		}
	}
	return max;
		
}

void knapsack01(knapsack k[],int l, int capacity)
{
	for (i = 0; i < l; i++)
	{
		k[i].density = (float)(k[i].w/k[i].p);
	}
	int x[l];
	for (j = 0; j < l;j++)
		x[j] = 0;
	for (i = 0; i < l ;i++)
	{
		int index = returnMAX(k,l);
		if (k[index].w <= capacity)
		{	
		x[index] = 1;
		capacity -= k[i].w;
		}
	}
	cout << "\nThe feasible solution is: ";
	for (i = 0; i < l; i++)
		cout << x[i] << " ";	
}



int main()
{
int l;
int capacity;
cout << "\nEnter the number of elements: ";
cin >> l;
cout << "\nEnter the following: ";
for (i = 0; i < l; i++)
{
	cout << "\nWeight: ";
	cin >> k[i].w;
	cout << "\nProfit: ";
	cin >> k[i].p;
	k[i].v = 0;
}
cout << "\nEnter capacity: ";
cin >> capacity;
knapsack01(k,l,capacity);
return 0;
}
