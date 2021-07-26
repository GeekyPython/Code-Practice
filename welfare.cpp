#include<iostream>
using namespace std;

long long maximum(long long arr[],int n)
{
    long long max = arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

    return max;
}


int main()
{
    int i,n;
    cin>>n;

    long long arr[n];
    long long sum=0,max,cost=0,diff;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    max = maximum(arr,n);

    for(i=0;i<n;i++)
    {
        if(arr[i]<max)
        {
            diff = max-arr[i];
            arr[i] += diff;
            cost += diff;
        }
    }

    cout<<cost;

    return 0;
}