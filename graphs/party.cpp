#include<iostream>
#include<vector>
using namespace std;

class Node
{
	public: long id;
	
	Node()
	{
		id = -1;
	}
	
	public: vector<Node *>ch;
};

bool search(vector<Node *>vec,long val)
{
	vector<Node *>::iterator i = vec.begin();
	
	while(i->id!=val && i!=vec.end())
	{
		i++;
	}
	
	if(i==vec.end())
	{
		return false;
	}
	
	return true;
}

Node * createNode(long val)
{
	Node *nnode;
	nnode= new Node;
	nnode->id = val;
	return nnode;
}

void createTree(Node *root,long val)
{
	if(root->id==-1)
	{
		root->id=val;
	}
	
	else if(root->ch.empty())
	{
		root->ch.push_back(createNode(val));
	}
}
	
