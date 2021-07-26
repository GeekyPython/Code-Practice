#include<iostream>
using namespace std;

int sumDigits(int n)
{   
    int sum=0;
    int temp=n;
    
    while(temp>0)
    {
        sum+= temp%10;
        temp/=10;
    }

    return sum;
}


int main()
{
    int n,x,temp;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        temp = 1;
        while(sumDigits(temp)!=x)
        {
            temp++;
        }    
        cout<<temp<<endl;
    }

    return 0;
}