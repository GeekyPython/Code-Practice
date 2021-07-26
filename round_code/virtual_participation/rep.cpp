#include<iostream>
using namespace std;


void swap(long *a,long *b)
{
	long temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

long * sort(long *arr,long n)
{
	for(long i=0;i<n;i++)
	{
		for(long j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
	
	return arr;
}



int main()
{
	long n;
	cin>>n;
	long arr[n];
	
	for(long i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	sort(arr,n);
	
	for(long i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	long i=0,c=0,j;
	
	while(i<n-1)
	{	
		j=0;
		if(arr[i]==arr[i+1])
		{	
			c++;
			while(arr[i+j]==arr[i+j+1])
			{
				j++;
				c++;
			}
			i+=j;
		}
		
		else
		{
			i++;
		}
		
	}
	
	cout<<n-c<<endl;
		
	return 0;
}

	
