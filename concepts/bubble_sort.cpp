#include<iostream>
using namespace std;

void swap(int * a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];

    for(int i=0 ;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);

                for(int i=0;i<n;i++)
                {
                    cout<<arr[i]<<" ";
                }
                cout<<"--> i= "<<i<<"j= "<<j<<"\n";            }
        }
    }

    
    return 0;
}