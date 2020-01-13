#include <iostream>
#define MAX 5
using namespace std;
class cQ
{
	int arr[MAX];
	int f , r;
public:
	cQ()
	{
		f = r = 0;
	}
	int enQ(int);
	int deQ();
	void display();
};

int cQ::enQ(int ele)
{
	if (r+1 == f || (r+1)%MAX == f)
		{cout << "\nQueue full!";return -1;}
	else if(f == 0 && r == MAX -1)
		{cout << "\nQueue full!";return -1;}
	else if (r == MAX - 1 && f !=0)
	{
		r = 0;
		arr[r] = ele;
		return 0;
	}	
	else
	arr[++r] = ele;
	return 0;
}

int cQ::deQ()
{
	if (f == r)
	{
		cout << "\nQueue empty!";
		return -1;
	}
	f++;
	return arr[f];
}

void cQ::display()
{
	if (f == r)
	{
		cout << "\nQueue empty!";
		return;
	}
	for (int i = (f+1)%MAX; i != r; i = (i+1)%MAX)
		cout << arr[i] << " ";
	cout << arr[r];
}


int main()
{
	int ch,num;
	cQ q1;
	do
	{
		cout << "\n1.EnQ\n2.DeQ\n3.Display\n4.Exit";
		cout << "\nEnter your choice: ";
		cin >> ch;
		switch(ch)
		{
			case 1:
				cout << "\nEnter element to be inserted: ";
				cin >>  num;
				q1.enQ(num);
				break;
			case 2:
				cout << "\nThe deleted element is: " << q1.deQ();
				break;
			case 3:
				cout << "\nThe queue is as follows: ";
				q1.display();
				break;
			default:
				break;
		}
	}while(ch != 4);
	return 0;
}
