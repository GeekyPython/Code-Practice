#include<iostream>
using namespace std;

void solve(int w,int h,int n)
{
	int res=1;
	
	while(w%2==0)
	{
		w/=2;
		res*=2;
	}
	
	while(h%2==0)
	{
		h/=2;
		res*=2;
	}
	
	cout<< (res>=n ? "YES\n" : "NO\n"); 
	
}


int main()
{
	int w,h,n;
	long t;
	
	cin>>t;
	
	for(long i=0;i<t;i++)
	{
		cin>>w>>h>>n;
		
		//int temp = levels(w)*levels(h);
		solve(w,h,n);
	}
		
	return 0;
}
