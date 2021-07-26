#include<iostream>
#include<cstring>
using namespace std;
		
bool check(int y)
{
	int arr[11] = {0};
	arr[10]==-1;
	int temp;
	
	while(y>0)
	{
		arr[y%10]++;
		y/=10;
	}
	
	int it=0;
	
	while(arr[it]<=1 && it<10)
	{
		it++;
	}
	
	if(it==10)
	{
		return true;
	}
	
	else
	{
		return false;
	}		
}

int main()
{
	int y;
	cin>>y;
	int i=y+1;
	
	while(!check(i) && i<=10000)
	{
		i++;
		
	}
	
	cout<<i;
	return 0;
}
	
	
