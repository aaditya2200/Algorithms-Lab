#include <iostream>
using namespace std;
int i,j;
void bfs(int adj[][20],int r,int v)
{
	int visited[r];
	for (i = 0; i < r; i++)
	{
		
		visited[i] = 0;
		
	}
	
	visited[v] = 1;
	int Q[20],front,rear;
	front = rear = -1;
	rear++;
	Q[rear] = v;
	while (front != rear)
	{
		
		front++;
		int w = Q[front];
		if (w % 2 == 0)
		{
			cout << w << " ";
		}
		int u = 0;
		while (u < r)
		{
			
			
			if (adj[w][u] == 1 && visited[u] == 0)
			{
				
				rear++;
				Q[rear] = u;
				visited[u] = 1;
			}
			u++;
			
		}
		
	}
	
}


int main()
{
	int mat[20][20],r,src;
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
	
	cout << "\nEnter the source vertex: ";
	cin >> src;
	
	bfs(mat,r,src);
	return 0;
}
