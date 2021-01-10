#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n,temp;
	cin>>n;
	vector<int>arr;
	
	cout<<"Enter Numbers: ";

	for(int i=0;i<n;i++)
	{
		cin>>temp;
		arr.push_back(temp);
	}

	cout<<std::max(arr)<<endl;
	return 0;
}

