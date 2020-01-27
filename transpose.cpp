#include <iostream>
using namespace std;
int i,j;
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
	int b[r][r];
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < r; j++)
		{
			b[i][j] = mat[j][i];
			
		}
	}
	//dfs(mat,r,0);
	cout <<"\nThe transpose of the graph is: \n";
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < r; j++)
		{
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	return 0;	
}
