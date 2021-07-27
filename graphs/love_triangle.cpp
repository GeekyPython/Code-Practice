#include<iostream>
using namespace std;

/*class Node
{
    public: int pos;
    public: int love;
};*/

int main()
{
    long n,c;
    cin>>n;
    long set[n];

    for(long i=0;i<n;i++)
    {
        cin>>set[i];
    }

    for(long i=0;i<n;i++)
    {
        set[i]--;
    }

    for(long i=0;i<n;i++)
    {
        if(i==n-1 && set[set[set[i]]]!=i)
        {
            cout<<"NO";
            break;
        }


        if(set[set[set[i]]]==i)
        {
            cout<<"YES";
            break;
        }
    }
    
    return 0;
}