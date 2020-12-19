#include<iostream>
using namespace std;

class Population
{
    public: int a,b;
};

int main()
{   
    int n,as=0,bs=0;
    cin>>n;
    Population p[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>p[i].a>>p[i].b;
    }

    for(int i=0;i<n;i++)
    {
        as+=p[i].a;
        bs+=p[i].b-p[i].a;
    }
    long res = as-bs;

    cout<<res;

    return 0;
}
