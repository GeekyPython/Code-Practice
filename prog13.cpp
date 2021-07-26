#include<iostream>
#include<cstring>
using namespace std;

bool isFilipino(char str[],int n)
{
	if(str[n-2]=='p' && str[n-1]=='o')
	{
		return true;
	}
	
	else
	{
		return false;
	}
}

bool isJapanese(char str[],int n)
{

	
	if((str[n-4]=='d' && str[n-3]=='e' && str[n-2]=='s' && str[n-1]=='u') || (str[n-4]=='m' && str[n-3]=='a' && str[n-2]=='s' && str[n-1]=='u'))
	{
		return true;
	}
	
	else
	{
		return false;
	}
}


bool isKorean(char str[],int n)
{
	if(str[n-5]=='m' && str[n-4]=='n' && str[n-3]=='i' && str[n-2]=='d' && str[n-1]=='a')
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
	int i,t,len;
	char str[500];
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>str;
		len = strlen(str);
		
		if(isFilipino(str,len))
		{
			cout<<"FILIPINO"<<endl;
		}
		
		else if(isJapanese(str,len))
		{
			cout<<"JAPANESE"<<endl;
		}
		
		else if(isKorean(str,len))
		{
			cout<<"KOREAN"<<endl;
		}
		
		else
		{
			cout<<"Unidentified Language"<<endl;
		}
	}
		
		return 0;
}
