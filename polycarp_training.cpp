#include<iostream>
using namespace std;

long long maximum(long long arr[],long long n)
{
    long long res,i;
    res = arr[0];

    for(i=1;i<n;i++)
    {
        if(res<arr[i])
        {
            res = arr[i];
        }
    }

    return res;
}

int main()
{
    long long n,sum=0;
    cin>>n;
    long long a[n];

    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }

    long long max = maximum(a,n);

    long long i=1,days=0;

    while(sum<max)
    {
        sum+=i;
        i++;
        days++;
    }

    cout<<days;
    return 0;
}