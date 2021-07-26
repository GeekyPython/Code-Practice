#include<iostream>
using namespace std;


int main()
{
	int w,n,k;
	cin>>k>>n>>w;
	
	int tp = (((w)*(w+1))/2)*k;
	
	if(tp<=n)
	{
		cout<<"0";
	}
	
	else
	{
		cout<<tp-n;
	}
	return 0;
}
