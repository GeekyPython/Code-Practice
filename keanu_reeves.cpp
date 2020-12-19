#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char str[n];
    cin>>str;
    int par[n-1];
    int c=0;


    int l=0,r=0;

    if(n==1)
    {
        cout<<"1\n";
        cout<<str;
    }

    else if(n==2 && str[0]!=str[1])
    {
        cout<<"2\n";
        cout<<str[0]<<" "<<str[1];
    }
    
    else
    {
        while(l<n && r<n)
        {
            while(str[l]==str[r])
            {
                r++;
            }
            c++;
            l = r;
        }

        cout<<c<<endl;
    }

    return 0;
}