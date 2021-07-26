#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,temp;
	cin>>t;
	
	for(int it=0;it<t;it++)
	{
		cin>>n;
		
		vector<int>arr;
		vector<int>bases;
		
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			arr.push_back(temp);
			
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				bases.push_back(abs(arr[i]-arr[j]));
			}
		}
		
		/*for(auto i=bases.begin();i!=bases.end();i++)
		{
			cout<<*i<<" ";
		}
		
		cout<<endl;*/
		
		sort(bases.begin(),bases.end());
		
		vector<int>::iterator ip = unique(bases.begin(),bases.end());
		bases.resize(distance(bases.begin(),ip));
		
		cout<<bases.size()<<endl;
		
	}
		
		return 0;
}
