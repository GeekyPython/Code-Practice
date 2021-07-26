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
		long temp = m;
		long count = 0;
		
		while(temp<=n)
		{
			temp*=2;
			count++;
		}
		
		cout<<count+(temp-n)<<'\n';
	}
}
