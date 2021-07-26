#include<iostream>
using namespace std;

bool isPrime(int n)
{
    int c=0;

    if(n==1)
    {
        return true;
    }

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }

    if(c==2)
    {
        return true;
    }

    else
    {
        return false;
    }
    
   
    
}


int main()
{
    int n;
    cin>>n;
    int i=1;

    while(isPrime((n*i)+1))
    {
        i++;
    }
    cout<<i;
    

    return 0;
}