#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Node
{
	public: long id;
	
	Node()
	{
		id=-1;
	}
	
	public: vector<Node>ch;
	friend long search(vector<Node>,long);
};

long search(vector<Node>vec,long val)
{
	vector<Node>::iterator i = vec.begin();
	while(i!=vec.end() && i->id!=val)
	{
		i++;
	}
	
	if(i==vec.end())
	{
		return -1;
	}
	
	else
	{
		return i-vec.begin();
	}
}

Node createNode(long val)
{
	Node temp;
	temp.id = val;
	return temp;
}

void insert(Node n,long val)
{
	if(n.id == -1)
	{
		n = createNode(val);
	}
	
	else if(n.id!=val && n.ch.empty())
	{
		n.ch.push_back(createNode(val));
	}
	
	else
	{	
		if(search(n.ch,val)!=-1)
		{
			insert(n.ch[search(n.ch,val)],val);
		}
	}
}

void print(Node n)
{
	

int main()
{
	
	return 0;
}




	
	
