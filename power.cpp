#include <iostream>
using namespace std;

int power(int a,int b)
{
	if (b==0)
		return 1;
	else if (b % 2 == 0)
		return power(a,b/2) * power(a,b/2);
	else
		return a * power(a,b/2) * power(a,b/2);
}

int main()
{
	int a,b;
	cout << "\nEnter value of the number: ";
	cin >> a;
	cout << "\nEnter power: ";
	cin >> b;
	cout << "\nResult is: " << power(a,b) << endl;
	return 0;
}
