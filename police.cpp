#include<iostream>
using namespace std;


int main()
{
    long long n,ao=0,cases=0,temp=0;
    cin>>n;

    int arr[n];

    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(long long i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            ao++;
        }

        else
        {
            cases++;
        }

        if(ao!=0 && cases!=0)
        {
            if(ao<=10)
            {
                ao=0;
                temp++;
            }

            else
            {
                ao-=10;
                temp++;
            }

            cases-=temp;   
        }
    }

    cout<<cases;

    return 0;

}