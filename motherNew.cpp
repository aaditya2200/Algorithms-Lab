#include <iostream>
using namespace std;
int i , j;
int vcount = 0;
int stepcount = 0;
void dfs(int adj[][10],int r, int v)
{
	int visited[r];
	for (i = 0; i < r; i++)
	{
		stepcount++;
		visited[i] = 0;
		stepcount++;
		
	}
	stepcount++;
	visited[v] = 1;stepcount++;
	vcount++;stepcount++;
	int Stack[20],top = -1;stepcount++;
	top++;stepcount++;
	Stack[top] = v;stepcount++;
	while (top != -1)
	{
		
		stepcount++;				
		int w = Stack[top--];stepcount++;
		cout << w << " ";stepcount++;
		int u = 0;stepcount++;
		while (u < r)
		{
			stepcount++;
			stepcount++;
			if (adj[w][u] == 1 && visited[u] == 0)
			{
				stepcount++;
				visited[u] = 1;stepcount++;
				vcount++;stepcount++;
				Stack[++top] = u;stepcount++;
			}
			u++;stepcount++;
		}
		stepcount++;
	}
}

int main()
{
	int mat[10][10],r,src;
	cout << "\nEnter the number of vertices in the graph: ";stepcount++;
	cin >> r;stepcount++;
	cout << "\nEnter the adjacency matrix: \n";stepcount++;
	for (i = 0; i < r; i++)
	{
		stepcount++;
		for (j = 0; j < r; j++)
		{
			stepcount++;
			cin >> mat[i][j];
			stepcount++;
		}
		stepcount++;
	}stepcount++;
	cout << "\nThe mother vertices in the graph are: ";stepcount++;
	//dfs for every node in graph
	for (i = 0; i < r; i++)
	{
		stepcount++;
		dfs(mat,r,i);stepcount++;
		stepcount++;
		if (vcount == r-1)
		{
			stepcount++;
			cout << i << " ";
			stepcount++;
		}
		vcount = 0;stepcount++;
	}
	stepcount++;
	cout << endl;
	stepcount++;
	stepcount++;
	cout << "\nThe stepcount for "<<r<<"-vertex graph is: " << ++stepcount;
	return 0;
}
