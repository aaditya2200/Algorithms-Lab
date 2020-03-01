#include<iostream>
using namespace std;
int i,j;
class graph {
  int v;
  int adj[100][100];

  public :
    graph(int v);
    void add(int,int,int);
    void prims();
    int returnMin(int[],bool[]);
    void print(int[],int[]);


};


graph::graph(int v) {
  this -> v = v;
  for(i=0; i<v; i++)
    for(j=0; j<v; j++)
      adj[i][j] = 0;
}


void graph :: add(int src, int dest, int cost) {
  adj[src][dest] = cost;
  adj[dest][src] = cost;
}

void graph :: prims() {

  int parent[v];
  bool included[v];

  int key[v];
  for(i=0 ;i<v; i++)
  included[i] = false, key[i] = 999;

  parent[0] = -1;
  key[0] = 0;

  for(i=0; i<v-1; i++) {

    int u =returnMin(key,included);
    included[u] = true;
    for(int x=0; x<v; x++)
      if(adj[u][x]!=0 && !included[x] && adj[u][x] < key[x])
        key[x] = adj[u][x], parent[x] = u;
  }

  print(parent,key);
}

int graph :: returnMin(int key[], bool included[]) {
  int min = 999;
  int minIndex;
  for(i=1; i<v; i++)
    if(key[i] < min && !included[i])
      min = key[i], minIndex = i;

  return minIndex;
}

void graph :: print(int parent[],int key[]) {
cout << "\nVertex set: ";  
for(i=1; i<v; i++)
    cout << parent[i] << " ";
cout << "\nEdge Set: ";
  for (j = 0; j < v; j++)
	cout << adj[parent[i]][i] << " ";

}


int main() 
{
int n,s,d,c,e;
	cout << "\nEnter the number of vertices: ";
	cin >>n ;
	graph g(n);
	cout << "\nEnter the number of edges: ";
	cin >> e;
	for (i=0;i<e;i++)
	{
			cout << "\nEnter source: ";	
			cin >> s;
			cout << "\nEnter destination: ";
			cin >> d;
			cout << "\nEnter cost: ";
			cin >> c;
			g.add(s,d,c);		
	}
	g.prims();
	return 0;
 
}
