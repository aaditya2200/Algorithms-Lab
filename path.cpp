#include <iostream>
using namespace std;
int stepcount = 0;
int i,j;
void dfs(int adj[][10],int r,int v)
{
	int dest;
	int arr[20];
	int index = -1;
	cout<<"\nEnter the destination vertex: ";stepcount++;
	cin>>dest;stepcount++;
	int visited[r];
	int Stack[20],top = -1;stepcount++;
	Stack[++top] = v;stepcount++;
	for(i = 0; i < r; i++)
		{stepcount++;visited[i] = 0;stepcount++;}
	visited[v] = 1;stepcount++;
	while(top != -1)
	{
		int u = Stack[top--];stepcount++;
		arr[++index] = u;stepcount++;
		int k = 0;stepcount++;
		while (k < r)
		{
			stepcount++;
			if (adj[u][k] == 1 && visited[k] == 0)
			{
				stepcount++;
				Stack[++top] = k;stepcount++;
				visited[k] = 1;stepcount++;
				//arr[++index] = k;
			}
			stepcount++;
			if(visited[dest] == 1)
			{
				stepcount++;
				for (i = 0; i < index+1; i++)
				{stepcount++;cout << arr[i]<< " "; stepcount++;}
				break;
			}
			k++;
		}
		stepcount++;
		stepcount++;
		if (visited[dest] == 1)
		{stepcount+=2;	break;}
		//index--;
	}
	stepcount++;
	
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
