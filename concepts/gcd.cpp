#include<bits/stdc++.h>
using namespace std;

long gcd(long a,long b)
{
    long gcd;
    if(a==b)
    {
        return a;
    }

   else if(a<b)
    {
        for(long i=1;i<b;i++)
        {
            if(a%i==0 && b%i==0)
            {
                gcd = i;
            }
        }

        return gcd;
    }

    else
    {
        for(long i=1;i<a;i++)
        {
            if(a%i==0 && b%i==0)
            {
                gcd = i;
            }
        }

        return gcd;
    }
}

int main()
{
    long a,b,g=0,n,t,temp;
    cin>>t;

    for(long i=0;i<t;i++)
    {
        cin>>n;

        

        cout<<gcd<<endl;
    }
    return 0;
}