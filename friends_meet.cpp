#include<iostream>
using namespace std;

void swap(int *a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int mod(int num)
{
    if(num<0)
    {
        num -= 2*num;
    }

    return num;
}

void sort(int arr[])
{
    int i,j;

    for(i=0;i<3-1;i++)
    {
        for(j=0;j<3-i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[3];

    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }

    sort(arr);

    int d1,d2;

    d1 = mod(arr[1]-arr[0]);
    d2 = mod(arr[2]-arr[1]);
    
    cout<<d1+d2;    
    
    return 0;

}