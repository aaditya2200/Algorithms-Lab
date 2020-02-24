#include <iostream>
#include "sll.cpp"
using namespace std;
int i,j;
void shortest(int dis[][10],int n,int src)
{
	node l;
	int d[n],p[n];
	for (i = 0; i < n; i++)
	{
		d[i] = dis[src][i];
	}
	cout << "\nThe distance array is: ";
	for (i = 0; i < n; i++)
		cout << d[i] << " ";
	for (j = 0; j < n; j++)
		p[j] = 0;
	p[src] = -1;
	for (j = 0; j < n; j++)
	{
		if (dis[src][j] != 999 && dis[src][j] != 0)
			p[j] = src;
		else if (dis[src][j] == 999)
			p[j] = 999;
	}
	cout << "\nPredecessor array: ";
	for (i = 0; i < n; i++)
	{
		if (p[i] != 999 && p[i] != -1)
			l.insertEnd(i);
	}
	//algo
	int k = 0;
	while (true)
	{
		int k = l.returnMIN(first);
		l.deleteElement(k);
		for (i = 0; i < n; i++)
		{
			if (dis[k][i] != 999 || dis[k][i] != 0)
			{
				int temp = d[i];
				int flag = 0;
				d[i] =  d[i]<(d[k]+dis[k][i])?d[i]:d[k]+dis[k][i];
				if (d[i] != temp)
				{
					l.insertEnd(d[i]);
					p[i] = k;
					flag = 1;
				}
				k++;
			}
			if (k == n) break;
		}
	}
	cout << "\nSolution: ";
	for (i = 0; i < n; i++)
		cout << d[i] << " ";
	for (j = 0; j < n; j++)
		cout << p[j] << " ";
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
	shortest(dis,n,src);
	cout << "\nThe distance matrix is as follows:\n";
	for (i=0;i<n;i++)
	{	
		for (j=0;j<n;j++)
			cout << dis[i][j] << " ";
		cout <<  endl;
	}
	return 0;
}
