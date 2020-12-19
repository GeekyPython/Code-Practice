#include<iostream>
using namespace std;

int main()
{
	long long c=0,n,i,l;
	cin>>n;
	
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	cout<<c;
	return 0;
}
