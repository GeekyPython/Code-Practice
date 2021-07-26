#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s[50];
	int i,len,c=0;
	
	cin>>s;
	len = strlen(s);
	
	for(i=0;i<len;i++)
	{
		if(s[i]=='a')
		{
			c++;
		}
	}
	
	if(c>len/2)
	{
	cout<<c;
		cout<<len;	
	}
	
	else if(c==len/2)
	{
		cout<<c;
		cout<<"1";
	}
	
	else
	{
		cout<<c;
		cout<<len-((len-c)-1);
	}
	return 0;
}
