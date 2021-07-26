#include<iostream>
using namespace std;

int main()
{
    int arr[3],t,i,j,temp,it;
    cin>>t;

    for(it=0;it<t;it++)
    {
        for(i=0;i<3;i++)
        {
            cin>>arr[i];
        }

        for(i=1;i<3;i++)
        {
            j=i-1;
            temp = arr[i];

            while(j>=0 && arr[j]>temp)
            {
                arr[j+1] = arr[j];
                j--;
            }

            arr[j+1] = temp;
        }
        
        

        if(arr[0]==arr[1] && arr[1]==arr[2])
        {
            cout<<"YES\n";
            cout<<arr[0]<<" "<<arr[0]<<" "<<arr[0]<<endl;
        }
        
        else if(arr[0]-1>1)
        {
            cout<<"NO\n";
        }

        else if(arr[0]==1)
        {
            cout<<"YES\n";
            cout<<"1 1 "<<arr[2]<<endl;
        }

        else
        {
            cout<<"YES\n";
            cout<<arr[0]-1<<" "<<arr[0]<<" "<<arr[2]<<endl;
        }
        
        
    }
    return 0;
}