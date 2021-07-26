#include<bits/stdc++.h>
using namespace std;


/*void swap(int *a,int *b)
{
	T temp;
	temp= *a;
	*a = *b;
	*b=temp;
}
	 

int * sort(int * arr,int n)
{
	for(T i=0;i<n;i++)
	{
		for(T j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1];
			}
			
		}
	}
	
	return arr;
}		 */


int main()
{
	int t,temp;
	cin>>t;
	
	
	for(int it=0;it<t;it++)
	{
		vector<int>arr;
		for(int i=0;i<4;i++)
		{
			cin>>temp;
			arr.push_back(temp);
		}
		
		sort(arr.begin(),arr.end());
		
		vector<int>::iterator i = arr.begin()+2;
		
		cout<<(*arr.begin()) * (*i)<<endl;
	}
	
	return 0;
}
	
	
	
