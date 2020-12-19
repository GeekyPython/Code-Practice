#include<iostream>
using namespace std;

int main()
{
    long k,w,n;
    long tc;
    cin>>k>>w>>n;

    for(long i=1;i<=n;i++)
    {
        tc += k*i;
    }

    if(tc<=w)
    {
        cout<<"0";
    }

    else
    {
        cout<<tc-w;
    }
    
    return 0;
}