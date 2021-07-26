#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int t,n;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>n;
        int arr[n];
        char str[n];

        cin>>str;

        for(int j=0;j<n;j++)
        {
            arr[j] = (int)str[j]-48;
        }
        
        int sum=0,res=0;
        
        for(int j=0;j<n;j++)
        {
            sum=0;
            for(int k=j;k<n;k++)
            {
                
                sum+=arr[k];
                if(sum==k-j+1)
                {
                    res++;
                    //sum=0;
                }
            }
        }

        cout<<res<<endl;
        
    }   

    return 0;

}