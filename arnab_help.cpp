#include<iostream>
#include<cmath>
using namespace std;

int res=2;

int next(int n)
{
    if(n>1)
    {
        res = (int)(pow((float)res,2.0)-1);
        //n--;
        next(n-1);
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    cout<<next(n)<<" ";
    return 0;
}
