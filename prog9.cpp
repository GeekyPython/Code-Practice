#include<iostream>
using namespace std;

int main()
{
	long long i,n,z=0,o=0;
	cin>>n;
	char str[n];
	
	cin>>str;
	
	for(i=0;i<n;i++)
	{
		if(str[i]=='z')
		{
			z++;
		}
		
		if(str[i]=='n')
		{
			o++;
		}
	}
	
	//Ncout<<z<<" "<<o;
	
	for(i=0;i<o;i++)
	{
		cout<<"1 ";
	}
	
	for(i=0;i<z;i++)
	{
		cout<<"0 ";
	}
	
	return 0;
}
