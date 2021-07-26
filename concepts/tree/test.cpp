#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int>vec;
	vec.push_back(1);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(2);
	vec.push_back(7);
	vec.push_back(6);
	vec.push_back(5);
	
	for(auto i=vec.begin();i!=vec.end();i++)
	{
		cout<<*i<<" ";
	}
	
	cout<<endl;
	vector<int>::iterator p;
	p= find(vec.begin(),vec.end(),2);
	cout<<p-vec.begin()<<endl;
	
	return 0;
}
