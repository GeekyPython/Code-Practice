#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int rem = 240-k;
    int i=1,c=0;
    
    while(rem>0 && i<=n)
    {
        rem-=5*i;
        c++;
        i++;

        if(rem<=0)
        {
            break;
        }
    }

    cout<<c;
    return 0;


}