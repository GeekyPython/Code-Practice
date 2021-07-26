#include<iostream>
#include<cstring>
using namespace std;



int main()
{
	char tab[2];
	char str[4][2];
	int i;
	
	cin>>tab;
	for(i=0;i<5;i++)
	{
		cin>>str[i];
	}
	int c=0;
	for(i=0;i<5;i++)
	{
		if(str[i][0]==tab[0] || str[i][1]==tab[1])
		{
			c++;
		}
	}
	
	if(c==0)
	{
		cout<<"NO";
	}
	
	else
	{
		cout<<"YES";
	}
	
	return 0;
}
