#include<iostream>
using namespace std;

int main()
{
	int turn=0;
	long long n,i,a;
	a=0;
	cin>>n;
	if(n==1)
	{
		cout<<"Ehab";
	}
	
	else if(n==2)
	{
		cout<<"Mahmood";
	}
	
	else
	{
	
		while(n!=0)
		{	
		
			if(turn==0)
			{	i=3;
				while(i%2!=0)
				{
					i++;
				}
				n-=i;
				turn=1;
			}
			
			else
			{
				i=4;
				while(i%2==0)
				{
					i++;	
				}
				
				n-=i;
				turn =0;
			}
		
		}
		turn == 1 ? cout<<"Ehab" : cout<<"Mahmood";
	}
	
	
	return 0;
}
