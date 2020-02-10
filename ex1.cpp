#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int count;
int sum(int arr[], int n)
{
	int i,s=0;
	count++;
	for (i = 0; i < n; i++)
	{
	count++;
	count++;
	s=s+arr[i];
	}
	count++;
	count++;
	return s;
}

int main(void)
{
	int arr[1000], n, x;
	count=0;
	cout<<"enter no. of elements";
	cin>>n;
//cout<<"enter "<< n <<" elements";
	for(int i=0;i<n;i++)
		arr[i]=i;
	auto start = high_resolution_clock::now();
	int result = sum(arr, n);
	auto stop = high_resolution_clock::now();
	cout<<"Sum of elements "<<result;
	cout<<endl;
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "time taken to run sum fucntion: "<<duration.count() << endl;
	cout<<"Number of steps for sum function "<<count << microseconds;
	return 0;
}
