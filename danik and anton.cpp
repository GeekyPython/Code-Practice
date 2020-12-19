#include<stdio.h>
#include<string.h>

int main()
{
	long i,n,ac=0,dc=0;
	scanf("%ld",&n);
	char str[n];
	
	scanf("%s",str);
	
	for(i=0;i<n;i++)
	{
		if(str[i]=='A')
		{
			ac++;
		}
		
		else
		{
			dc++;
		}
	}
	
	if(ac>dc)
	{
		printf("Anton");
	}
	
	else if(ac<dc)
	{
		printf("Danik");
	}
	
	else
	{
		printf("Friendship");
	}
	return 0;
}
