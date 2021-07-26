#include<stdio.h>

int binary_search(int arr[],int n,int tar)
{
    int l = 0;
    int size = n;
    int h = size-1;
    int m;

    while(l<=h)
    {
        m = l+ (h-l)/2;
        
        if(arr[m]==tar)
        {
            return m;
        }

        else if(arr[m]>tar)
        {
            h = m-1;
        }

        else
        {
            l = m+1;
        }
        
    }

    return -1;

}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    int res = binary_search(arr,size,6);

    printf("%d",res);

    return 0;
}