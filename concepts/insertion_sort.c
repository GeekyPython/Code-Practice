#include<stdio.h>

void ins_sort_inc(int arr[],int n)
{
    //int size = sizeof(arr)/sizeof(int);
    int i,j,temp;
    

    for(i=1;i<n;i++)
    {
        temp = arr[i];
        j=i-1;

        while(arr[j]>temp && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = temp;
    }
}

void ins_sort_dec(int arr[],int n)
{
    int i,j,temp;

    for(i=1;i<n;i++)
    {
        temp = arr[i];
        j = i-1;

        while(j>=0 && arr[j]<temp)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = temp;
    }
}

int main()
{
    int arr[] = {5,2,4,6,1,3};
    int size = sizeof(arr)/sizeof(int);
    
    ins_sort_dec(arr,size);

    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");
    return 0;
}