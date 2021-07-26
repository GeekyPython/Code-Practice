#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],long l,long m,long r)
{
    long i,j,k;
    long n1 = m-l+1;
    long n2 = r-m;

    long L[n1],R[n2];
    
    for(i=0;i<n1;i++)
    {
        L[i] = arr[l+i];
    }

    for(j=0;j<n2;j++)
    {
        R[j] = arr[m+1+j];
    }

    i=0;
    j=0;
    k=l;

    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k] = L[i];
            i++;
        }

        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[],long l,long r)
{
    long mid;
    if(l<r)
    {
        mid = l+(r-l)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}

void pop(int arr[],long ind,long n)
{
    long i;

    for(i=ind;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }

    n--;
}

int main()
{
    long t,it,n;
    cin>>t;

    for(it=0;it<t;it++)
    {
        cin>>n;
        int arr[n];
        
        for(long i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        long no=0,nz=0;

        for(long i=0;i>n;i++)
        {
            if(arr[i]==0)
            {
                nz++;
            }
            else
            {
                no++;
            }
        }


        merge_sort(arr,0,n);

        for(long i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        
        cout<<"\n";

        if(no%2!=0)
        {
            pop(arr,no-1,n);
        }

        else if(nz%2==0)
        {
            pop(arr,nz-1,n);
        }

        for(long i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        

    }

}