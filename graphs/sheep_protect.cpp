#include<iostream>
using namespace std;

bool isSafe(int i,int j,char a[500][500],int r,int c)
{
    if((a[i-1][j]=='D' || i-1<0 || a[i-1][j]=='S') && (a[i+1][j]=='D' || i+1==r || a[i+1][j]=='S') && (a[i][j+1]=='D' || a[i][j+1]=='S' || j+1==c) && (a[i][j-1]=='D' || a[i][j-1]=='S' || j-1<0) )
    {
        return true;
    }
    return false;
}

bool willDie(int i,int j,int mat[500][500])
{
    if(mat[i-1][j]=='W' || mat[i+1][j]=='W' || mat[i][j-1]=='W' || mat[i][j+1]=='W')
    {
        return true;
    }
    return false;
}



int main()
{
    int r,c=0;
    cin>>r>>c;
    char past[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>past[i][j];
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(past[i][j]=='S')
            {
                c++;
            }
        }
    }
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(past[i][j]=='S')
            {  
                --c;

                if(past[i][j+1]=='W' || past[i][j+1]=='W' || past[i+1][j]=='W' || past[i-1][j]=='W')
                {
                    break;
                }

                else
                {
                    if(past[i][j-1]!='W' && past[i][j-1]=='.')
                    {
                        past[i][j-1]='D';
                    }

                    if(past[i+1][j]!='W' && past[i+1][j]=='.')
                    {
                        past[i+1][j]='D';
                    }

                    if(past[i][j+1]!='W' && past[i][j+1]=='.')
                    {
                        past[i][j+1] = 'D';
                    }

                    if(past[i-1][j]!='W' && past[i-1][j]=='.')
                    {
                        past[i][j-1] = 'D';
                    }
                }
                
                
            }
        }
    }

    if(c==0)
    {
        cout<<"YES "<<c<<"\n";

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<past[i][j];
            }
            cout<<endl;
        }
    }
    
    else
    {
        cout<<"NO "<<c<<"\n";

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<past[i][j];
            }
            cout<<endl;
        }
    }
    

    
    return 0;
}