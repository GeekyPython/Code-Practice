#include<iostream>
using namespace std;




void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a=*b;
	*b=temp;
}

void swapRows(int mat[5][5],int r1,int r2)
{
	int j;
	
	for(j=0;j<5;j++)
	{
		swap(&mat[r1][j],&mat[r2][j]);
	}
}

void swapCols(int mat[5][5],int c1,int c2)
{
	int j;
	
	for(j=0;j<5;j++)
	{
		swap(&mat[j][c1],&mat[j][c2]);
	}
}

void printMat(int mat[5][5])
{
	int i,j;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int mat[5][5];
	int i,j,r,c,cpos,rpos,csteps,rsteps;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>mat[i][j];
		}
	}
	
	//Columns Swap Condidtions
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{	
			if(mat[i][j]==1)
			{
				cpos = j;
				rpos = i;
				break;
			}
		}
	}
	
	if(cpos==2)
	{
		csteps = 0;
	}
	
	else if(cpos<2)
	{
		for(i=0;i<2;i++)
		{
			swapCols(mat,i,i+1);
		}
	}
	
	else
	{
		for(i=cpos;i>2;i--)
		{
			swapCols(mat,i,i-1);
		}	
	}
	
	printMat(mat);
	
	return 0;
	
	
}
