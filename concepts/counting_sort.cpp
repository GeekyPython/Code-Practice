#include<iostream>
using namespace std;

int max(int arr[],int n)
{
    int res = arr[0];
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]>res)
        {
            res = arr[i];
        }
    }

    return res;
}

void counting_sort(int arr[],int n)
{
    int size = max(arr,n);
    int bka[size] = {0};

    for(int i=0;i<n;i++)
    {
        bka[i-1]++;
    } 

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<bka[i];j++)
        {
            cout<<i+1<<" ";
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    counting_sort(arr,n);
    return 0;


}