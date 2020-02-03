#include <iostream>
using namespace std;
int i,j;
int stepcount = 0;
bool val[10];
void dfs(int adj[][10],int r, int v)
{
	for (j = 0; j < 10; j++)
	{
		val[i] = false;
	}
	int index = -1;
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
				val[++index] = true;
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
	int flag = 0;
	cout << "\nEnter source: ";
	cin>>src;
	dfs(mat,r,src);
	for (i = 0; i < r; i++)
	{
		if (val[i])
		{flag = 1;continue;}
		else {flag = 0;break;}
		
			
	}
	stepcount++;
	if (flag == 1)
		cout << "\nConnected!";
	stepcount++;
	cout << "\nThe number of steps for "<<r<<"-vertex graph is: " << ++stepcount<<endl;
	return 0;
}
