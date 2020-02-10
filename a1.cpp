#include <iostream>
using namespace std;
int i,j;
int main()
{
	int s1,s2;
	int mat[10][10];
	int a[5],b[5];
	int r;
	bool f = false;
	cout << "\nEnter number of vertices: ";
	cin >> r;
	for (i = 0; i < r; i++)
		for (j = 0; j < r; j++)
			cin >> mat[i][j];
	cout << "\nEnter the bipartite sets: ";
	cout << "\nNumber of elements in first set: ";
	cin >> s1;
	cout << "\nNumber of elements in second set: ";
	cin >> s2;
	for (i = 0; i < s1; i++)
		cin >> a[i];
	for (j = 0; j < s2; j++)
		cin >> b[j];
	for (i = 0; i < s1; i++)
		for (j = 0; j < s2; j++)
		{
			if (mat[a[i]][b[j]] ==1)
			{
				f = true;
			}
			else f = false;
		}
	if (f)
		cout << "\nBipartite";
	else
		cout << "\nNot bipartite";
	return 0;
	
}
