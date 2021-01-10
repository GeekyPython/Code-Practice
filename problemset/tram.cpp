#include<iostream>
using namespace std;

class Passengers
{
	public: int a,b;
};

int main()
{
	int n;
	cin>>n;
	Passengers p[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>p[i].a>>p[i].b;
	}
	
	//cout<<endl;
	
	int arr[n-1] = {0};
	int s=0;
	
	for(int i=0;i<n-1;i++)
	{
		s+= p[i].b - p[i].a;
		arr[i] = s;
	}
	
	int max = arr[0];
	
	for(int i=1;i<n-1;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	
	/*for(int i=0;i<n-1;i++)
	{
		cout<<arr[i]<<" "; 
	}
	
	cout<<endl;*/
	
	cout<<max;
	
	
	return 0;
}
