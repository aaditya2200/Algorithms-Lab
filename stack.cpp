#include <iostream>
#define MAX 50
using namespace std;
class iStack
{
	int arr[MAX];
	int top;
public:
	int push(int);
	int pop();
	int topele();
	void display();
	iStack()
	{
		top = -1;
	}
};

int iStack::push(int ele)
{
	if (top == MAX - 1)
	{
		cout << "\nStack Overflow!";
		return -1;
	}
	top++;
	arr[top] = ele;
	return 0;
}

int iStack::pop()
{
	if (top == -1)
	{
		cout << "\nStack underflow!";
		return -1;
	}
	return arr[top--];
}

int iStack::topele()
{
	if (top == -1)
	{
		cout << "\nStack underflow!";
		return -1;
	}
	return arr[top];
}

void iStack::display()
{
	if (top == -1)
	{
		cout << "\nStack underflow!";
	}
	else
	{
		int i;
		for (i = top; i >= 0; i--)
			cout << arr[i] << " ";	
	}
}


int main()
{
	iStack s1;
	int ch;int num;
	do
	{
		cout << "\n1.Push\n2.Pop\n3.Topmost element\n4.Display stack\n5.Exit";
		cout << "\nEnter your choice: ";
		cin >> ch;
		switch (ch)
		{
			case 1:
				cout << "\nEnter value to be pushed: ";
				cin >> num;
				s1.push(num);
				break;
			case 2:
				cout << "\nPopped elemnt is: " << s1.pop();
				break;
			case 3:
				cout << "\nTopmost element is: "<< s1.topele();
				break;
			case 4:
				cout << "\nthe stack is as follows: ";
				s1.display();
				break;
			default:
				break;
		}

	}while (ch != 5);
	return 0;
}
