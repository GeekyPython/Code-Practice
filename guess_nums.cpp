#include<iostream>
using namespace std;

void swap(long long *a,long long *b)
{
    long long temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    long long arr[4];
    
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<4-1;i++)
    {
        for(int j=0;j<4-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }

return 0;
}