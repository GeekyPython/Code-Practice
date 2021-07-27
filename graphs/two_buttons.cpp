#include<iostream>
using namespace std;

int main()
{
	long n,m;
	cin>>n>>m;
	
	if(n==m)
	{
		cout<<0<<'\n';
	}
	
	else if(m<n)
	{
		cout<<n-m<<'\n';
	}
	
	else
	{
		long count = 0;
		
		if((n-1) == m/2)
		{
			cout<<2;
		}
		
		else
		{
			while(n<m)
			{
				n*=2;
				count++;
				cout<<n<<" "<<count<<endl;
			}
			
			cout<<count+(n-m)<<'\n';
		}
		
		
	}
}
