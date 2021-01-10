#include<iostream>
using namespace std;

int sizeOfArray(int *arr)
{
	int c=0;
	
	while(arr[c]!='\0')
	{
		++c;
	}
	
	return c;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	cout<<sizeOfArray(arr);
	return 0;
}
