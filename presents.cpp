#include<stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n],pos;
	int res[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		pos = arr[i]-1;
		res[pos] = i+1;
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",res[i]);
	}
	
	return 0;
	
}
