#include<iostream>
using namespace std;

int main()
{
	int t,n,rc=0,bc=0;
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		char r[n],b[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>r[i];
		}
		
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		
		for(int i=0;i<n;i++)
		{
			if((int)r[i]>(int)b[i])
			{
				rc++;
			}
			
			else if((int)r[i]<(int)b[i])
			{
				bc++;
			}				
		}
		
		if(rc>bc)
		{
			cout<<"RED\n";
		}
		
		else if(rc==bc)
		{
			cout<<"EQUAL\n";
		}
		
		else
		{
			cout<<"BLUE\n";
		}
	}
	
	return  0;
}
