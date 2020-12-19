#include<stdio.h>

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void sel_sort(int *arr,int n)
{
    int i,j,minInd;
    
    for(i=0;i<n;i++)
    {
        minInd = i;

        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minInd])
            {
                minInd = j;
            }
        }

        swap(&arr[i],&arr[minInd]);
    }
}

int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d",&size);

    int arr[size];
    printf(("Enter array elements: "));
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    //int size = sizeof(arr)/sizeof(int);
    sel_sort(arr,size);

    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");

    return 0;
}