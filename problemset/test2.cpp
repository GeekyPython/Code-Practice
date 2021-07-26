#include<vector>
#include<iostream>
using namespace std;

int main()
{
	vector<int>arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(5);
	arr.push_back(6);
	
	cout<<*(arr.end()-1);
	
	return 0;
}
	
