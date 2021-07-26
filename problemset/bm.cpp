#include<bits/stdc++.h>
using namespace std;

int main()
{
	int mat[5][5];
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>mat[i][j];
		}
	}

	/*for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		
		cout<<endl;
	}*/
	
	int x,y;
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(mat[i][j]==1)
			{
				x=i+1;
				y=j+1;
			}
		}
	}
	
	
	
	cout<<abs(3-x)+abs(3-y);
	
	return 0;
}
	
	
	
	
