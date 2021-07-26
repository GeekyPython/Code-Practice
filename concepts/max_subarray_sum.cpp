#include<iostream>
using namespace std;


int max(int a,int b)
{
    if(a>=b)
    {
        return a;
    }
    return b;
}

int main()
{
    int s;
    int sum=0,best=0;

    cin>>s;
    int arr[s];

    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }

    for(int a=0;a<s;a++)
    {
        sum+=0;
        for(int b=a;b<s;b++)
        {
            sum+=arr[b];
            best =  max(best,sum); 
        }
    }

    cout<<best;
    return 0;
}
