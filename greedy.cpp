#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long t;
    cin>>t;

    for(long i=0;i<t;i++)
    {
        long a,b;
        cin>>a>>b;

        if(a==b)
        {
            cout<<"0\n";
        }

        else
        {   
            if(abs(b-a)%10!=0)
            {
                cout<<(abs(b-a)/10)+1<<endl;
            }

            else
            {
                cout<<abs(b-a)/10<<endl;
            }    
        }
    }
    return 0;
}