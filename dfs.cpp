#include <iostream>
using namespace std;
int i,j;
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
	visited[v] = 1;stepcount++;
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
	}
	stepcount++;
	cout << "\nEnter the source vertex: ";stepcount++;
	cin >> src;stepcount++;
	stepcount++;
	dfs(mat,r,src);
	stepcount++;
	cout << "\nThe number of steps for "<<r<<"-vertex graph is: " << ++stepcount<<endl;
	return 0;
}
