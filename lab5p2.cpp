#include <iostream>
using namespace std;
int i,j;
int i1=0;
int i2=0;
int g;
int returnMIN(int dis[][10],int n, int tv,int val)
{
	int min = 0;
	for (i = 1; i < n; i++)
	{
		if (dis[tv][i] < dis[tv][min] && dis[tv][i] < val)
			{min = i;g=i;}
	}
	return min;
}
void prims(int dis[][10],int n,int src)
{
	int t[n];
	for (i=0;i<n;i++)
		t[i] = 0;
	int tv[n];
	for (j=0;j<n;j++)
		tv[j] = 0;
	int k = 0,e;
	for (int i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (dis[i][j] != 0)
				e++;
		}
	} 
	e/=2;
	tv[i2++] = src;
	while (e != 0 && k != n-1)
	{
		int val=0;
		for (i = 0; i < i2; i++)
			int val = returnMIN(dis,n,tv[i],val);
		e--;
		k++;
		t[i1++] = val;
		tv[i2++] = g; 
	}
	cout << "\nT and tv: ";
	for (i = 0; i<n; i++)
	{
		cout << t[i] <<" "<< tv[i] << " ";
		cout <<endl;
	}
}


int main()
{
	int n,dis[10][10],src;
	cout << "\nEnter the number of vertices: ";
	cin >> n;
	cout << "\nEnter the distance matrix: (999 for infinity)\n";
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> dis[i][j];
	cout << "\nEnter the source vertex: ";
	cin >> src;
	prims(dis,n,src);
	cout << "\nThe distance matrix is as follows:\n";
	for (i=0;i<n;i++)
	{	
		for (j=0;j<n;j++)
			cout << dis[i][j] << " ";
		cout <<  endl;
	}
	return 0;
}


