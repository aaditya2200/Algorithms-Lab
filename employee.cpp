#include <iostream>
#include <stdio.h>
using namespace std;
class employee
{
	char name[25],dept[25];
	int age;
	float salary;
public:
	employee()
	{
		age = 0;
		salary = 0.0;
	}
	void add();
	void update();
	void sort(employee [],int size);
	void display(employee [] , int size);
};

void employee::add()
{
	char ch;
	cin.ignore();
	cout << "\nEnter the name of the employee: ";
	cin.getline(name,25);
	cin.ignore();
	cout << "\nEnter his/her age: ";
	cin >> age;
	cin.ignore();
	cout << "\nEnter the department: ";
	cin.getline(dept,25);
	cin.ignore();
	cout << "\nEnter the salary: ";
	cin >> salary;
	cin.ignore();
	cout << "Do you want to update salary (y/n): ";
	if (ch == 'Y' || ch == 'y')
	{
		update();
	}
	cin.ignore();
}

void employee::update()
{
	float updt;
	cout << "\nEnter the salary update value: ";
	cin.ignore();
	cin >> updt;
	salary += updt;
}

void employee::sort(employee e[],int size)
{
	int i , j;
	float min;
	employee t;
	for (i = 1; i < size; i++)
	{
		t = e[i];
		min = e[i].salary;
		j = i-1;
		while (j >= 0 && e[j].salary < min)
		{
			e[j+1] = e[j];
			j--;
		}
		e[j+1] = t;
	}
	cout << "\nThe highest employee salary is: ";
	cout << e[0].salary << endl;
}

void employee::display(employee e[] , int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "\nName: " << e[i].name;
		cout << "\nAge: " << e[i].age;
		cout << "\nDepartment: " << e[i].dept;
		cout << "\nSalary: "<<e[i].salary; 
	}
}


int main()
{
	employee e[10];
	int num;
	cout << "\nEnter the number of employees: ";
	cin>>num;
	cout << "\nEnter the employee details: ";
	for (int i = 0; i < num; i++)
	{
		e[i].add();
	}
	e[0].sort(e,num);
	e[0].display(e,num);
}
