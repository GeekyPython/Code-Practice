#include<iostream>
using namespace std;

void swap(long long *a,long long *b)
{
	long long temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	long long arr[4];
	int i,j;
	
	for(i=0;i<4;i++)
	{
		cin>>arr[i];
	}
	
	for(i=0;i<4-1;i++)
	{
		for(j=0;j<4-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
	
	for(i=0;i<4;i++)
	{
	cout<< arr[i]<<" ";
	}
	
	//cout<<arr[3]-arr[1]<<" "<<arr[3]-arr[2]<<" "<< arr[3]-arr[0];
	return 0;
}
