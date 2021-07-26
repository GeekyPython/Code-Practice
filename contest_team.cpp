#include<iostream>
using namespace std;

int main()
{
	long i,n,k,c=0;
	
	cin>>n>>k;
	
	int stu[n];
	
	for(i=0;i<n;i++)
	{
		cin>>stu[i];
	}
	
	int lim = 5-k;
	
	for(i=0;i<n;i++)
	{
		if(stu[i]<=lim)
		{
			c++;
		}
	}
	
	cout<<c/3;
	
	return 0;
}
