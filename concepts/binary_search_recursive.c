#include<stdio.h>

int binary_search_recursive(int arr[],int n,int tar,int l,int r)
{
    int m = l + (r-l)/2;
    if(l<=r)
    {
        if(arr[m]==tar)
        {
            return m;
        }

        else if(arr[m]>tar)
        {
            return binary_search_recursive(arr,n,tar,l,m-1);
        }

        else
        {
            return binary_search_recursive(arr,n,tar,m+1,r);
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    int res = binary_search_recursive(arr,size,5,0,size-1);
    printf("%d",res);
    return 0;
}