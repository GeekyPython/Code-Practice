#include<iostream>
using namespace std;


int main()
{
    
    int t,it,n,i;
    cin>>t;

    for(it=0;it<t;it++)
    {
        int occur[10] = {0};
        cin>>n;

        int arr[2*n],ind=1;

        for(i=0;i<2*n;i++)
        {
            cin>>arr[i];
        }

        for(i=0;i<2*n;i++)
        {
            if(occur[arr[i]]==0)
            {
                occur[arr[i]] = ind;
                ind++;
            }
        }
        
        int res[n] = {0};
        for(i=0;i<2*n;i++)
        {
            if(occur[i]!=0)
            {
                res[occur[i]]=i;
            }
        }

        for(i=0;i<n;i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<" /"<<endl;
    }
    return 0;

}