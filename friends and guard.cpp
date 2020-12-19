#include<stdio.h>

int main()
{
	long n,h;
	scanf("%ld%ld",&n,&h);
	long i,w=0,fr[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%ld",&fr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(fr[i]<=h)
		{
			w++;
		}
		
		else
		{
			w+=2;
		}
	}
	
	printf("%ld",w);
	
	return 0;
	
}
