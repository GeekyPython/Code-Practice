#include<stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    //rem = ((num-1)*(num+1))%4;
    if(((num-1)*(num+1))%4==0 && num%5!=0)
    {
        printf("Prime");
    }

    else
    {
        printf("Not Prime");
    }
    return 0;
}