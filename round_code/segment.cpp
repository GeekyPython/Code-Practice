#include<iostream>
using namespace std;

class segment
{
    public: int l,r;
};

void swap(segment s1,segment s2)
{
    int temp;
    temp = s1.l;
    s1.l = s2.l;
    s2.l = temp;
    
    temp = s1.r;
    s1.r = s2.r;
    s2.r = temp;
}


int main()
{
    int n;
    cin>>n;
    segment set[n];

    for(int i=0;i<n;i++)
    {
        cin>>set[i].l>>set[i].r;
    }

    
}