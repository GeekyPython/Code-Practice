#include<iostream>
using namespace std;


int main()
{
	int n;
	cin>>n;
	
	if(n==1 || n==2)
	{
		cout<<"NO";
	}
	
	else
	{
		cout<<(n%2==0 ? "YES" : "NO");
	}
	
	return 0;
}
