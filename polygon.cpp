#include<iostream>
using namespace std;

int isNinety(long long an)
{
    int sum=0;

    if(an==90)
    {
        return 0;
    }

    while(sum<=90)
    {
        sum+=an;
    }

    if(sum==90)
    {
        return 0;
    }

    else
    {
        return 1;
    }
    
}

int main()
{
    long it,t,n,ia,ea;
    cin>>t;

    for(it=0;it<t;it++)
    {
        cin>>n;
        ia = (n-2)*180;
        ea = ia/n;

        if(isNinety(ea)==0)
        {
            cout<<"YES "<<ia<<" "<<ea<<endl;
        }
        

        else
        {
            cout<<"NO "<<ia<<" "<<ea<<endl;
        }
    }
    
    return 0;
}