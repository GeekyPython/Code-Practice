#include<iostream>
using namespace std;

int main()
{
    int i,t;
    cin>>t;
    int j,n,m;

    for(i=0;i<t;i++)
    {
        cin>>n>>m;
        int arr[n];
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        int temp = arr[0];
        i=1;
        while(i<n && arr[0]<=m)
        {
            if(arr[i]>0 && arr[0]<=m)
            {
                while(arr[i]>0 && arr[0]<m)
                {
                    arr[0]++;
                    arr[i]--;
                }
            }
            i++;
        }

        /*for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }*/

        if(arr[0]<=m)
        {
            cout<<arr[0]<<endl;
        }

        else
        {
            cout<<temp<<"\n"; 
        }
        

        cout<<endl;
    }
    return 0;
}