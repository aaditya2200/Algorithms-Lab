#include <iostream>
using namespace std;
int i , j;
int vcount = 0;
void dfs(int adj[][10],int r, int v)
{
	int visited[r];
	for (i = 0; i < r; i++)
	{
		
		visited[i] = 0;
		
	}
	visited[v] = 1;
	int Stack[20],top = -1;
	top++;
	Stack[top] = v;
	while (top != -1)
	{
		
				
		int w = Stack[top--];
		cout << w << " ";
		int u = 0;
		while (u < r)
		{
			
			
			if (adj[w][u] == 1 && visited[u] == 0)
			{
				
				visited[u] = 1;
				vcount++;
				Stack[++top] = u;
			}
			u++;
		}
		
	}
}

int main()
{
	int mat[10][10],r,src;
	cout << "\nEnter the number of vertices in the graph: ";
	cin >> r;
	cout << "\nEnter the adjacency matrix: \n";
	for (i = 0; i < r; i++)
	{
		
		for (j = 0; j < r; j++)
		{
			
			cin >> mat[i][j];
			
		}
		
	}
	cout << "\nThe mother vertices in the graph are: ";
	//dfs for every node in graph
	for (i = 0; i < r; i++)
	{
		dfs(mat,r,i);
		if (vcount == r - 1)
		{
			cout << i << " ";
		}
		vcount = 0;
	}
	cout << endl;
	return 0;
}
