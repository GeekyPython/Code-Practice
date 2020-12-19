#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b=temp;
}

void sort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

int main()
{
    int t,n;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>n;
        int arr[n];

        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }

        sort(arr,n);

        for(int j=0;j<n-2;j++)
        {
            if(arr[j]+arr[j+1]>arr[j+2])
            {
                cout<<arr[j]<<" "<<arr[j+1]<<" "<<arr[j+2]<<endl;
                break;
            }
        }
    }

    return 0;
}