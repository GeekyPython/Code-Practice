#include<iostream>
using namespace std;

int main()
{
    int a,b,ms,ss;
    cin>>a>>b;

    if(a==b)
    {
        ms = a;
        cout<<ms<<" "<<0;
    }

    else
    {
        int min = (a<b)?a:b;
        int max = (a>b)?a:b;
        ms = min;
        ss = (max-min)/2;

        cout<<ms<<" "<<ss;
    }
    
    return 0;
}