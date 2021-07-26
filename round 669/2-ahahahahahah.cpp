#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr;

    long t,n;
    cin>>t;

    for(long it=0;it<t;it++)
    {
        cin>>n;
        int temp;

        if(n==2)
        {
            for(int i=0;i!=n;i++)
            {
                cin>>temp;
                arr.push_back(temp);
            }

            if(~(arr[0]==0 ^ arr[1]==0))
            {
                cout<<"1\n0\n";
            }

            else if(arr[0]==0 && arr[1]==0)
            {
                cout<<"2\n0 0\n";
            }

            else
            {
                cout<<"2\n1 1\n";
            }
        }

        else
        {
            for(long i=0;i<n;i++)
            {
                cin>>temp;
                arr.push_back(temp);
            }
            sort(arr.begin(),arr.end());

            long nz=0,no=0;

            for(auto i=arr.begin();i!=arr.end();i++)
            {
                if(*i==0)
                {
                    nz++;
                }

                else
                {
                    no++;
                }
            }

            if(no%2!=0)
            {
                arr.pop_back();
            }

            if(nz%2!=0)
            {
            auto i=arr.begin();
            while(*(i+1)!=1)
            {
                i++;
            }

            arr.erase(i);
            }
            
            cout<<arr.size()<<"\n";
            for(auto i=arr.begin();i!=arr.end();i++)
            {
                cout<<*i<<" ";
            }
            cout<<"\n";
        }
    
    }

    return 0;
}