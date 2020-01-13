#include <iostream>
using namespace std;
class node
{
	int data;
	node* next;
public:
	void insertEnd(int);
	void deleteEnd();
	void insertFront(int);
	void deleteFront();
	void sort();
	void reverse();
	void display();
};
node* first = NULL;

void node::insertEnd(int ele)
{
	node *t = new node;
	t->data = ele;
	t->next = NULL;
	if (!first)
		first = t;
	else
	{
		node *i;
		for (i = first; i->next; i = i->next);
		i->next = t;
	}
}

void node::deleteEnd()
{
	if (!first)
		cout << "\nList empty!";
	else
	{
		node *i;
		node* prev;
		for (i = first; i->next; i= i->next){prev = i;};
		prev->next = NULL;
		delete i;
	}
}


void node::insertFront(int ele)
{
	node *t = new node;
	t->data = ele;
	t->next = NULL;
	if (!first)
		first = t;
	else
	{
		t->next = first;
		first = t;
	}
}


void node::deleteFront()
{
	if (!first)
		{cout << "\nList empty!";return;}
	node *t = first;
	first = first->next;
	delete t;
}

void node::sort()
{
	int t;
	if (!first)
		{cout << "\nList Empty!";return;}
	node *i;
	node *j;
	for (i = first; i->next; i= i->next)
	{
		for (j = first; j->next != NULL; j=j->next)
		{
			if (j->data > j->next->data)
			{
				t = j->data;
				j->data = j->next->data;
				j->next->data = t;
			}
		}
	}
	cout << "\nThe sorted list is: ";
	//call func. here
	display();
}


void node::reverse()
{
	if (!first)
	{cout << "\nList empty!";return;}
	node *curr=NULL;
	node *prev=NULL;
	while (first)
	{
		curr = first;
		first = first->next;
		curr->next = prev;
		prev = curr;
	}
	first = curr;
	cout << "\nThe reversed list is: ";
	//call func. here
	display();
}

void node::display()
{
	if (!first)
		{cout << "\nList empty!";return;}
	node *i = first;
	while (i)
	{
		cout << "\nData: " << i->data;
		cout << "\nNext address: " << i->next;
		i=i->next;
	}
}


int main()
{
	int ch,num;
	node obj;
	do
	{
		cout << "\n1.Insert Front\n2.Insert End\n3.Delete front\n4.Delete End \n5.Sort\n6.Reverse\n7.Display\n8.Exit";
		cout << "\nEnter your choice: ";
		cin >> ch;
		switch(ch)
		{
			case 1:
				cout << "\nElement to be inserted: ";
				cin >> num;
				obj.insertFront(num);
				break;
			case 2:
				cout << "\nEnter element to be inserted: ";
				cin>>num;
				obj.insertEnd(num);
				break;
			case 3:
				obj.deleteFront();
				break;
			case 4:
				obj.deleteEnd();
				break;
			case 5:
				obj.sort();
				break;
			case 6:
				obj.reverse();
				break;
			case 7:
				obj.display();
				break;
			default:
				break; 
		}

	}while(ch != 8);
	return 0;
}
