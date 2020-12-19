#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t,n,it;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>n;
        int arr[n];
        int temp[n];
        int f=0,b=n-1;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }

        while(f<=b)
        {
            if(f==b)
            {
                cout<<arr[f];
                f++;
            }
            else
            {
                cout<<arr[f]<<" ";
                f++;
                cout<<arr[b]<<" ";
                b--;
            }
            
            
        }

        cout<<endl;
    }
    return 0;

}