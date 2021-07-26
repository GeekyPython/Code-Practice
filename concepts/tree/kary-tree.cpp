#include<bits/stdc++.h>
using namespace std;


class Node
{
	public: int id;
	public: vector<Node *>ch;
};


Node * newNode(int num)
{
	Node * nnode= new Node;
	nnode->id = num;
	return nnode;
}

void traverse(Node *root)
{
	if(root == NULL)
	{
		return;
	}
	
	queue<Node *>q;
	q.push(root);
	
	while(!q.empty())
	{
		int n = q.size();
		
		while(n>0)
		{
			Node *p = q.front();
			q.pop();
			cout<<p->id<<" ";
						
			for(int i=0;i<p->ch.size();i++)
			{
				q.push(p->ch[i]);
			}
			n--;
		}
		cout<<endl;
	}			
	
}

int main()
{
	Node *root = newNode(10);
    (root->ch).push_back(newNode(2));
    (root->ch).push_back(newNode(34));
    (root->ch).push_back(newNode(56));
    (root->ch).push_back(newNode(100));
    (root->ch[0]->ch).push_back(newNode(77));
    (root->ch[0]->ch).push_back(newNode(88));
    (root->ch[2]->ch).push_back(newNode(1));
    (root->ch[3]->ch).push_back(newNode(7));
    (root->ch[3]->ch).push_back(newNode(8));
    (root->ch[3]->ch).push_back(newNode(9));
    
    cout<<"Treaversal:\n";
    traverse(root);
    return 0;
}



	
