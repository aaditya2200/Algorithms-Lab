#include <iostream>
#define MAX 50
using namespace std;
class Q
{
	int arr[MAX];
	int f , r;
public:
	Q()
	{
		f = r = -1;
	}
	int enQ(int);
	int deQ();
	void display();
};

int Q::enQ(int ele)
{
	if (r == MAX -1)
	{
		cout << "\nQueue full!";
		return -1;
	}
	r++;
	arr[r] = ele;
	return 0;
}

int Q::deQ()
{
	if (f == r)
	{
		cout << "\nQueue empty!";
		return -1;
	}
	f++;
	return arr[f];
}

void Q::display()
{
	if (f==r)
		cout << "\nQueue empty!";
	else
	{
		int i;
		for (i = f + 1; i <= r; i++)
		{	
			cout << arr[i] << " ";	
		}
	}
}

int main()
{
	int ch,num;
	Q q1;
	do
	{	
		cout << "\n1.EnQ\n2.DeQ\n3.Display\n4.Exit";
		cout << "\nEnter your choice: ";
		cin >> ch;
		switch(ch)
		{
			case 1:
				cout << "\nEnter the value to be inserted: ";
				cin >> num;
				q1.enQ(num);
				break;
			case 2:
				cout << "\nElement deleted: " << q1.deQ();
				break;
			case 3:
				cout << "\nThe queue is: ";
				q1.display();
				break;
			default:
				break;
		}
	}while(ch != 4);
	return 0;
}

