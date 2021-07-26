#include<iostream>
using namespace std;

bool isInt(char ch)
{
    if(ch>=48 && ch<=57)
    {
        return true;
    }

    else
    {
        return false;
    }
    
}

void insert_left(int arr[],long long n)
{
    int i=0;

    while(arr[i]!=0)
    {
        i++;
    }

    if(i==10)
    {
        cout<<"Hotel Full\n";
    }

    else
    {
        arr[i] = 1;
    }
}

void insert_right(int arr[],long long n)
{
    int i=9;

    while(arr[i]!=0)
    {
        i--;
    }

    if(i<0)
    {
        cout<<"Hotel Full\n";
    }

    else
    {
        arr[i] = 1;
    }
}

int main()
{
    long long n;
    cin>>n;
    int temp;

    char str[n];
    cin>>str;

    int arr[10] = {0};

    for(int i=0;i<n;i++)
    {
        if(isInt(str[i]))
        {
            temp = (int)str[i];
            arr[temp-48] = 0;
        }

        else if(str[i]=='L')
        {
            insert_left(arr,n);
        }

        else if(str[i]=='R')
        {
            insert_right(arr,n);
        }
    }
    
    for(int i=0;i<10;i++)
    {
        cout<<arr[i];
    }

    return 0;

}