#include<iostream>
using namespace std;

int isPrime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }

    if(c<=2)
    {
        return 0;
    }

    return 1;
}

int isnp(int n)
{
    int c;

    for()
}