#include <iostream>
using namespace std;
int i,j;
int stepcount = 0;
void bfs(int adj[][20],int r,int v)
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
	int Q[20],front,rear;
	front = rear = -1;stepcount++;
	rear++;stepcount++;
	Q[rear] = v;stepcount++;
	while (front != rear)
	{
		stepcount++;
		front++;stepcount++;
		int w = Q[front];stepcount++;
		cout << w << " ";stepcount++;
		int u = 0;stepcount++;
		while (u < r)
		{
			stepcount++;
			stepcount++;
			if (adj[v][u] == 1 && visited[u] == 0)
			{
				stepcount++;
				rear++;stepcount++;
				Q[rear] = u;stepcount++;
				visited[u] = 1;stepcount++;
			}
			u++;
			stepcount++;
		}
		stepcount++;
	}
	stepcount++;
}


int main()
{
	int mat[20][20],r,src;
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
	bfs(mat,r,src);
	stepcount++;
	cout << "\nThe number of steps for " << r << "-vertex graph is: " << stepcount++ << endl;
	return 0;
}
