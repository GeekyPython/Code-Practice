#include<iostream>
using namespace std;

int main()
{
	string s1 = "I hate";
	string s2 = "I love";
	
	int n;
	cin>>n;
	
	if(n==1)
	{
		cout<<"I hate it";
	}
	
		
	else if(n==2)
	{
		cout<<"I hate that I love it";
	}
	
	
	else
	{
		for(int i=1;i<=n;i++)
		{	
			if(i<=2)
			{
				if(i==1)
				{
					cout<<s1<<" that ";
				}
				
				else
				{
					cout<<s2<<" that ";
				}
			}
			
			else
			{
				if(i%2!=0 && i<n)
				{
					cout<<s1<<" that ";
				}
				
				else if(i%2!=0 && i==n)
				{
					cout<<s1<<" it";
				}
				
				else if(i%2==0 && i<n)
				{
					cout<<s2<<" that ";
				}
				
				else if(i%2==0 && i==n)
				{
					cout<<s2<<" it";
				}
			}
		}
	}
	
	return 0;
}
