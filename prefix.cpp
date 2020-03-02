#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int i,j;
string t;
string prefix(string a,string b)
{
	int l1 = a.length();
	int l2 = b.length();
	for (i = 0,j = 0; i < l1 && j  < l2; i++,j++)
	{
		if (a.at(i) != b.at(j))
			break;
		t  += a.at(i);
	}
	return t;
}

string divide(string str[],int l, int h)
{
	if (l == h)
		return str[l];
	if (l < h)
	{
		int m = (l+h)/2;
		string a = divide(str,l,m);
		string b = divide(str,m+1,h);
		cout << a << " " << b;
		return (prefix(a,b));
	}
}


int main()
{
	string str[4];
	cout << "\nEnter 4 strings: ";
	for (i = 0; i < 4; i++)
	{
		cin >> str[i];
	}
	//longest common prefix
	string res = divide(str,0,3);
	cout << "\nThe longest common prefix is: ";
	cout << res << endl;
	return 0;
}
