#include<iostream>
using namespace std;

int main()
{
	long long i,n,c=0;
	cin>>n;
	string arr[n];
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(i=0;i<n;i++)
	{
	
		
		if(arr[i]=="Tetrahedron")
		{
			c+=4;
		}
		
		else if(arr[i]=="Cube")
		{
			c+=6;
		}
		
		else if(arr[i]=="Octahedron")
		{
			c+=8;
		}
		
		else if(arr[i]=="Dodecahedron")
		{
			c+=12;
		}
		
		else if(arr[i]=="Icosahedron")
		{
			c+=20;
		}
		
		else
		{
			cout<<"Invalid("<<arr[i]<<")"<<endl;
		}
	}
	cout<<c;
	return 0;
}
