//lightweight babyyyyy
#include<iostream>
#include<stack>
using namespace std;

long max(long *arr,long n)
{
	long max = arr[0],ind=0;
	long i;
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			  max= arr[i];
			  ind = i;
		}
	}
	
	return ind;
}

int main()
{
	long n,ref;
	stack<long> temp;
	cin>>n;
	long arr[n];
	arr[0] = -1;
	for(long i=1;i<n;i++)
	{
		cin>>arr[i];
	}
	
	
	ref = n-1;
	
	while(ref>0)
	{
		temp.push(arr[ref]);
		ref = arr[ref]-1;
	}
	
	while(!temp.empty())
	{
		cout<<temp.top()<<" ";
		temp.pop();
	}
	cout<<n;
	cout<<endl;
	
	return 0;
}
		
		
