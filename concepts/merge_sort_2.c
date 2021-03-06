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

    for(i=0;i<n2;i++)
    {    
        R[i] = arr[m+1+j];
    }

    i=0;
    j=0;
    k=l;

    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j])
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
    if(l<r)
    {
        int m = l+(r-l)/2;
        merge_sort(arr,l,m);
        merge_sort(arr,m+1,r);
        merge(arr,l,m,r);
    } 
}

int main()
{
    int arr[] = {34,1,65,12,44,33,78,2,0,43};
    int size = sizeof(arr)/sizeof(int);
    merge_sort(arr,0,size-1);

    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}