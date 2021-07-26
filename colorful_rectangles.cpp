#include<iostream>
using namespace std;

int max(int arr[],int n)
{
    int res = arr[0];

    for(int i=0;i<n;i++)
    {
        if(res<arr[i])
        {
            res=arr[i]; 
        }
    }

    return res;
}

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b=temp;
}

int main()
{
    int r,g,b;
    cin>>r>>g>>b;

    int R[r],G[g],B[b];

    for(int i=0;i<r;i++)
    {
        cin>>R[i];
    }

    for(int i=0;i<g;i++)
    {
        cin>>G[i];
    }

    for(int i=0;i<b;i++)
    {
        cin>>B[i];
    }

    int arr[3];

    arr[0] = max(R,r);
    arr[1] = max(G,g);
    arr[2] = max(B,b);

    
    int i,j;
    
    for(i=0;i<3-1;i++)
    {
        for(j=0;j<3-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }

    cout<<arr[2]*arr[1];
    
    //cout<<max(R,r)<<" "<<max(G,g)<<" "<<max(B,b);

    return 0;
}