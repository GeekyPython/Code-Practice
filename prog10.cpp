#include<iostream>
using namespace std;

int main()
{
	int i,q;
	long long n;
	cin>>q;
	
	for(i=0;i<q;i++)
	{
		cin>>n;
		
		if(n==1)
		{
			cout<<"3"<<endl;
		}
		
		else if(n==2)
		{
			cout<<"2"<<endl;
		}
		
		else
		{
			if(n%2==0)
			{
				cout<<"0"<<endl;
			}
			
			else
			{
				cout<<"1"<<endl;
			}
		}
	}
	return 0;
}
