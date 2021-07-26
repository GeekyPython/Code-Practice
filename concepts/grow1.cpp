#include<iostream>
using namespace std;

int main()
{
    unsigned int x =-100;
    x = x%3;
    if(x<0) 
    {x+=3;}
    cout<<x;
    return 0; 
}