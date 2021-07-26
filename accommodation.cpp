#include<stdio.h>

int main()
{
	int i,n,c=0,p,q;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&p,&q);
		
		if(p==q || q==1)
		{
			continue;
		}
		
		else
		{
			if(p<=(q-2))
			{
				c++;
			}
		}
	}
	
	printf("%d",c);
	
	return 0;
}
