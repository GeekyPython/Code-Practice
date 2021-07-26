#include<stdio.h>

void merge(int arr[],int l,int m,int r)
{
    int i,j,k;
    int n1 = m-l+1;
    int n2 = r-m;

    int L[n1],R[n2];
    
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

void merge_sort(int arr[],int l,int r)
{
    int mid;
    if(l<r)
    {
        mid = l+(r-l)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int size = sizeof(arr)/sizeof(int);
    merge_sort(arr,0,size-1);
    printf("Sorted Array:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}