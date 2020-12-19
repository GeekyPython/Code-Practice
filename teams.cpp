#include<stdio.h>

long min(int arr[],int n)
{
	long i;
	int res = arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]<res)
		{
			res=arr[i];
		}
	}
	
	return res;
}

int main()
{
	long i,n,it,inp;
	int arr[3];
	
	scanf("%ld",&n);
	
	for(it=0;it<n;it++)
	{
		scanf("%d",&inp);
		arr[inp-1]++;
		
	}
	
	printf("%ld",min(arr,3));
	
	return 0;
}
