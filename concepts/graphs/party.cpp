#include<iostream>
using namespace std;

int main()
{
    int  n;
    cin>>n;
    int arr[n];
    int gr[n][n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            gr[i][j]=0;
        }
    }

    for(int k=0;k<n;k++)
    {
        if(arr[k]>0)
        {
            gr[k][arr[k]-1] = 1;
        }
    }
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<gr[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}