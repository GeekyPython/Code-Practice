#include<iostream>
#include<cmath>
using namespace std;

void swap(long  *a,long *b)
{
    long temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void sort(long arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

int main()
{
    long arr[3];
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    long  d;
    long res=0;
    cin>>d;
    sort(arr,3);

    if(arr[1]-arr[0]<d)
    {
        res+=d-(arr[1]-arr[0]);
        //cout<<">>"<<res<<endl;
    }

    if(arr[2]-arr[1]<d)
    {
        res+=d-(arr[2]-arr[1]);
       // cout<<"<<"<<res<<endl;
    }

    cout<<res;
    
    return 0;
}