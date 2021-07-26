#include<iostream>
using namespace std;

int max(int a, int b)
{
    if(a>=b) return a;
    return b;
}

int main()
{
    int arr[8] = {-1,2,4,-3,5,2,-5,2};
    int best=0,sum=0;
    for(int a=0;a<8;a++)
    {
        sum = max(arr[a],sum+arr[a]);
        best=max(best,sum);
    }

    cout<<best;
    return 0;
}