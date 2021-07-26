#include<iostream>
using namespace std;

int main()
{
	int n,i,t=0;
	cin>>n;
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			t=0;
		}
		
		else
		{
			t=1;
			break;
		}
	}
	
	if(t==1)
	{
		cout<<"HARD";
	}
	
	else
	{
		cout<<"EASY";
	}
	
	return 0;
}
	
	
