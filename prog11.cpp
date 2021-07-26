#include<iostream>
using namespace std;

int main()
{
	int i,n,sc=0,fc=0;
	cin>>n;
	
	char str[n];
	cin>>str;
	
	for(i=0;i<n;i++)
	{
		if(str[i]=='S' && str[i+1]=='F')
		{
			sc++;
		}
		
		else if(str[i]=='F' && str[i+1]=='S')
		{
			fc++;
		}
		
		else
		{
			continue;
		}
	}
	
	if(sc>fc)
	{
		//cout<<sc<<" "<<fc<<endl;
		cout<<"YES";
	}
	
	else if(sc==fc)
	{
		//cout<<sc<<" "<<fc<<endl;
		cout<<"NO";
	}
	
	else
	{
		//cout<<sc<<" "<<fc<<endl;
		cout<<"NO";
	}
	
	return 0;
}
